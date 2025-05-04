#include <iostream>
#include <string>

class City {
private:
    std::string name;
    int population;
    double area;

public:
    City(const std::string& name, int population, double area)
        : name(name), population(population), area(area) {}

    double getPopulationDensity() const {
        return population / area;
    }
};

int main() {
    City c1("New York", 8419600, 783.8);
    c1.getPopulationDensity();
    return 0;
}
