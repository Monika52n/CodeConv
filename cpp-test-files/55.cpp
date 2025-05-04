//fact
#include <iostream>

int main() {
    int num = 5;
    int fact = 1;

    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }

    std::cout << "Factorial of " << num << " is " << fact << std::endl;

    return 0;
}