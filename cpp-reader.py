import os
import json

def cpp_files_to_jsonl(input_folder, output_file):
    cpp_extensions = {'.cpp', '.cc', '.cxx', '.h', '.hpp', '.hxx'}
    with open(output_file, 'w', encoding='utf-8') as out_file:
        for root, dirs, files in os.walk(input_folder):
            for filename in files:
                if any(filename.endswith(ext) for ext in cpp_extensions):
                    full_path = os.path.join(root, filename)
                    try:
                        with open(full_path, 'r', encoding='utf-8') as f:
                            content = f.read()
                        record = {
                            'filename': os.path.relpath(full_path, input_folder),
                            'content': content
                        }
                        out_file.write(json.dumps(record, ensure_ascii=False) + '\n')
                    except Exception as e:
                        print(f"Nem sikerült beolvasni: {full_path}, hiba: {e}")

if __name__ == "__main__":
    base_dir = os.path.dirname(os.path.abspath(__file__))
    input_dir = os.path.join(base_dir, 'cpp-test-files')
    output_path = os.path.join(base_dir, 'cpp_test_files.jsonl')

    cpp_files_to_jsonl(input_dir, output_path)
    print(f"Kész: {output_path} létrehozva.")
