//Dinamikus memória
#include <iostream>

int main() {
    int* number = new int;
    *number = 42;
    std::cout << "Value stored in dynamically allocated memory: " << *number << std::endl;
    delete number;
    return 0;
}