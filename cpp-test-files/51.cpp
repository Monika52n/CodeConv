//avg
#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;
    std::cout << "Average: " << average << std::endl;

    return 0;
}