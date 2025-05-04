//Öröklődés
#include <iostream>
#include <string>
using namespace std;

class City {
protected:
    string name;
    int population;

public:
    City(const string& name, int population)
        : name(name), population(population) {}

    void displayInfo() const {
        cout << "City: " << name << endl;
        cout << "Population: " << population << endl;
    }
};

class CapitalCity : public City {
private:
    string country;

public:
    CapitalCity(const string& name, int population, const string& country)
        : City(name, population), country(country) {}

    void displayInfo() const {
        City::displayInfo();
        cout << "Country: " << country << endl;
    }
};