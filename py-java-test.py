########## betanult modellre tesztelés 
from transformers import AutoTokenizer, pipeline
from transformers import AutoModelForCausalLM, AutoTokenizer

checkpoint_path = "./bloom-py2java"
output_path = "./bloom-py2java"

# Modell mentése
model = AutoModelForCausalLM.from_pretrained(checkpoint_path)
model.save_pretrained(output_path)

# Tokenizer mentése (mivel ez az eredeti modellhez tartozik)
tokenizer = AutoTokenizer.from_pretrained("bigscience/bloom-560m")
tokenizer.save_pretrained(output_path)

# Teszt bemenet
input_text = "def plusMin(a, b, c): return a * b - c"
prompt = f"Python:\n{input_text}\n\nJava:\n"

generator = pipeline("text2text-generation", model=model, tokenizer=tokenizer)
output = generator(prompt, max_length=128)[0]["generated_text"]

print("\n=== Generált Java kód ===\n")
print(output)