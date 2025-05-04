//foreach
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";

    for (char c : str) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}