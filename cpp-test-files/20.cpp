//sort

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> cities = {
        "London", "Budapest", "Paris", "Berlin", "Amsterdam"
    };

    std::sort(cities.begin(), cities.end());

    std::cout << "Cities sorted by name:\n";
    for (const auto& city : cities) {
        std::cout << city << "\n";
    }

    return 0;
}