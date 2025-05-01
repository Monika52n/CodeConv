########## betanult modellre tesztelés 
from transformers import AutoTokenizer, AutoModelForCausalLM, pipeline

# 1. A betanított modell betöltése
model_dir = "./bloom-cpp2java"  # Ha így mentetted el
tokenizer = AutoTokenizer.from_pretrained(model_dir)
model = AutoModelForCausalLM.from_pretrained(model_dir)

# 2. Teszt input (C++ kód)
input_text = "char getThirdChar(std::string str) {\n    return str[2] + 1;\n}"

# 3. Prompt összeállítása
prompt = f"C++:\n{input_text}\n\nJava:\n"

# 4. Generátor létrehozása
generator = pipeline("text-generation", model=model, tokenizer=tokenizer)

# 5. Kód generálása
input_ids = tokenizer(prompt, return_tensors="pt").input_ids

output = generator(
    prompt,
    max_length=input_ids.shape[1] + 60,
    do_sample=True,
    temperature=0.7,
    pad_token_id=tokenizer.eos_token_id
)

# 6. Kimenet feldolgozása
generated = output[0]["generated_text"]
java_code = generated.replace(prompt, "").split("###")[0].strip()

# 7. Kiírás
print("\n=== Generált Java kód ===\n")
print(java_code)
