import os
import json
from transformers import AutoTokenizer, AutoModelForCausalLM, pipeline

# 1. Modell betöltése
model_dir = "./bloom-cpp2java"
tokenizer = AutoTokenizer.from_pretrained(model_dir)
model = AutoModelForCausalLM.from_pretrained(model_dir)
generator = pipeline("text-generation", model=model, tokenizer=tokenizer)

# 2. Input fájl és output mappa
input_jsonl = "cpp_test_files.jsonl"
output_folder = "java-files"
os.makedirs(output_folder, exist_ok=True)

# 3. JSONL feldolgozása
with open(input_jsonl, 'r', encoding='utf-8') as infile:
    for line in infile:
        try:
            record = json.loads(line)
            cpp_filename = record.get("filename")
            cpp_code = record.get("content", "").strip()

            if not cpp_filename or not cpp_code:
                continue

            # 4. Prompt összeállítása
            prompt = f"C++:\n{cpp_code}\n\nJava:\n"

            # 5. Kód generálása
            input_ids = tokenizer(prompt, return_tensors="pt").input_ids
            output = generator(
                prompt,
                max_length = min(input_ids.shape[1] + 1024, 2048),
                do_sample=True,
                temperature=0.7,
                pad_token_id=tokenizer.eos_token_id
            )

            generated = output[0]["generated_text"]
            java_code = generated.replace(prompt, "").split("###")[0].strip()

            # 6. Kimeneti fájlnév generálása
            java_filename = os.path.splitext(cpp_filename)[0] + ".java"
            java_filepath = os.path.join(output_folder, java_filename)

            # Létrehozzuk az alkönyvtárakat, ha kellenek
            os.makedirs(os.path.dirname(java_filepath), exist_ok=True)

            # 7. Java fájl mentése
            with open(java_filepath, 'w', encoding='utf-8') as outfile:
                outfile.write(java_code)

            print(f"[✓] Saved: {java_filepath}")

        except Exception as e:
            print(f"[!] Error at file: {e}")
