//Template
#include <iostream>
#include <string>

template <typename T>
class Stats {
private:
    T statValue;

public:
    Stats(T value) : statValue(value) {}
};