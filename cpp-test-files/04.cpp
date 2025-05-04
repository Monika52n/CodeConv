//Osztály
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

    std::string getName() const { return name; }
    int getPopulation() const { return population; }
    double getArea() const { return area; }

    void setName(const std::string& newName) { name = newName; }
    void setPopulation(int newPopulation) {
        if (newPopulation >= 0)
            population = newPopulation;
    }
    void setArea(double newArea) {
        if (newArea > 0)
            area = newArea;
    }

    double getPopulationDensity() const {
        return population / area;
    }
};