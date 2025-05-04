//pointer pointer
#include <iostream>

int main() {
    int value = 10;
    int* ptr = &value;
    int** ptrPtr = &ptr;

    std::cout << "Value: " << value << std::endl;
    std::cout << "ptr points to: " << *ptr << std::endl;
    std::cout << "ptrPtr points to: " << **ptrPtr << std::endl;

    return 0;
}