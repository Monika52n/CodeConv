//+,-, *, /
#include <iostream>

int main() {
    double a = 12.5;
    double b = 3.5;

    std::cout << "Addition: " << (a + b) << '\n';
    std::cout << "Subtraction: " << (a - b) << '\n';
    std::cout << "Multiplication: " << (a * b) << '\n';

    if (b != 0) {
        std::cout << "Division: " << (a / b) << '\n';
    } else {
        std::cout << "Division: Error (division by zero)\n";
    } 

    return 0;
}