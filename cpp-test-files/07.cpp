//Vector
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {4, 5, 6};

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    std::cout << "Elements in the vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "The second element is: " << numbers[1] << std::endl;

    std::cout << "The size of the vector is: " << numbers.size() << std::endl;

    return 0;
}

