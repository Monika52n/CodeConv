//file
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outFile("simple_example.txt");
    outFile << "Hello, this is a simple file write example." << std::endl;
    outFile.close();
    return 0;
}