//szálkezekés
#include <iostream>
#include <thread>

void helloWorld() {
    std::cout << "Hello from the thread!" << std::endl;
}

int main() {
    std::thread t(helloWorld);
    t.join();
    std::cout << "Hello from main!" << std::endl;
    return 0;
}