//override
#include <iostream>
#include <string>

class Place {
public:
    virtual void describe() const {
        std::cout << "This is a place." << std::endl;
    }
};

class City : public Place {
public:
    void describe() const override {
        std::cout << "This is a city with many buildings." << std::endl;
    }
};