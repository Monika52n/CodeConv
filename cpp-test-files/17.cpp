//file
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("simple_example.txt");
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    inFile.close();
    return 0;
}