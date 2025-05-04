//Pointer
#include <iostream>

int main() {
    int number = 10;
    int* ptr = &number;

    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Address of number: " << &number << std::endl;
    std::cout << "Value of ptr (should be address of number): " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl;

    *ptr = 42;

    std::cout << "New value of number (after *ptr = 42): " << number << std::endl;

    return 0;
}
