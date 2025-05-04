//Tömb
#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int numbers[size] = {12, 7, 9, 20, 5};

    int sum = 0;
    int maxValue = numbers[0];
    int minValue = numbers[0];

    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
        if (numbers[i] > maxValue) maxValue = numbers[i];
        if (numbers[i] < minValue) minValue = numbers[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Max value: " << maxValue << endl;
    cout << "Min value: " << minValue << endl;

    return 0;
}
