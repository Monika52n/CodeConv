//try-catch
#include <iostream>
#include <stdexcept>

int main() {
    try {
        int num = 10;
        int den = 0;

        if (den == 0) {
            throw std::invalid_argument("Cannot divide by zero.");
        }

        std::cout << "Result: " << num / den << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}