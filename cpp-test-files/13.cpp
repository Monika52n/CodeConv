//define
#include <iostream>
#include <vector>

#define ZIPCODE 1234

int main() {
    std::vector<int> postalCodes = {3333, 4444, 5555, 1234, 9999};

    for (int code : postalCodes) {
        if (code == ZIPCODE) {
            std::cout << "Found ZIP code: " << ZIPCODE << "!\n";
        }
    }

    return 0;
}