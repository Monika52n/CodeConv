import subprocess
import sys
from datasets import Dataset
from transformers import (
    AutoTokenizer,
    AutoModelForCausalLM,
    TrainingArguments,
    Trainer,
    DataCollatorForLanguageModeling,
    pipeline
)

########## modell betanítása
# 1. Modell és tokenizer betöltése
model_id = "bigscience/bloom-560m"
tokenizer = AutoTokenizer.from_pretrained(model_id)
model = AutoModelForCausalLM.from_pretrained(model_id)

# 2. Adatkészlet betöltése
dataset = Dataset.from_json("py-java.jsonl")

# 3. Preprocessing + tanító prompt egységesítés (### zárással)
def preprocess(example):
    prompt = f"Python:\n{example['input']}\n\nJava:\n"
    full_text = prompt + example['output'].strip() + "\n###"
    return tokenizer(full_text, truncation=True, padding="max_length", max_length=512)

tokenized_dataset = dataset.map(preprocess)

# 4. Fine-tuning beállítások
training_args = TrainingArguments(
    output_dir="./bloom-py2java",
    per_device_train_batch_size=2,
    num_train_epochs=3,
    save_strategy="epoch",
    logging_steps=10,
    learning_rate=2e-5,
    save_total_limit=2,
    fp16=False  # True ha van GPU-d
)

data_collator = DataCollatorForLanguageModeling(tokenizer=tokenizer, mlm=False)

# 5. Trainer létrehozása
trainer = Trainer(
    model=model,
    args=training_args,
    train_dataset=tokenized_dataset,
    tokenizer=tokenizer,
    data_collator=data_collator
)

# 6. Modell tanítása
trainer.train()

# Modell mentése
trainer.save_model("./bloom-py2java")

# Tokenizer mentése külön
tokenizer.save_pretrained("./bloom-py2java")

# 7. Tesztelés egy új bemenettel
input_text = "def plusMin(a, b, c): return a * b - c"
prompt = f"Python:\n{input_text}\n\nJava:\n"

# 8. Generálás (limitált hossz, egy konkrét válasz)
input_ids = tokenizer(prompt, return_tensors="pt").input_ids
generator = pipeline("text-generation", model=model, tokenizer=tokenizer)

output = generator(
    prompt,
    max_length=input_ids.shape[1] + 60, 
    do_sample=True,
    temperature=0.7,
    pad_token_id=tokenizer.eos_token_id
)

# 9. Eredmény kiírása
generated = output[0]["generated_text"]
java_code = generated.replace(prompt, "").split("###")[0].strip()

print("\n=== Generált Java kód ===\n")
print(java_code)