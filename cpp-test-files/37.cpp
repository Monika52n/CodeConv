//függvény
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(4, 5);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}