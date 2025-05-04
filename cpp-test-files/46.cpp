//switch
#include <iostream>

int main() {
    int number = 2;

    switch (number) {
        case 1:
            std::cout << "You selected one." << std::endl;
            break;
        case 2:
            std::cout << "You selected two." << std::endl;
            break;
        case 3:
            std::cout << "You selected three." << std::endl;
            break;
        default:
            std::cout << "Invalid selection!" << std::endl;
    }

    return 0;
}