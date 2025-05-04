//map
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> ages;

    ages["Alice"] = 30;
    ages["Bob"] = 25;
    ages["Charlie"] = 40;

    for (const auto& entry : ages) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }

    return 0;
}