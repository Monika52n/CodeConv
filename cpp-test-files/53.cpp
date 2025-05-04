//LCM
#include <iostream>

int main() {
    int a = 12, b = 18;
    int max = (a > b) ? a : b;

    while (true) {
        if (max % a == 0 && max % b == 0) {
            std::cout << "LCM of " << a << " and " << b << " is " << max << std::endl;
            break;
        }
        ++max;
    }

    return 0;
}