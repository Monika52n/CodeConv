//Öröklődés2
#include <iostream>
#include <string>
using namespace std;

class Identifiable {
public:
    virtual string getId() const = 0;
    virtual ~Identifiable() {}
};

class City : public Identifiable {
protected:
    string name;
    int population;

public:
    City(const string& name, int population)
        : name(name), population(population) {}

    string getId() const override {
        return "City ID: " + name;
    }
};