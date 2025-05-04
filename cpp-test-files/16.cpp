//Konstans
#include <iostream>
#include <string>

class Day {
private:
    const std::string name;
    int temperature;

public:
    Day(const std::string& dayName, int temp)
        : name(dayName), temperature(temp) {}

    std::string getName() const {
        return name;
    }

    int getTemperature() const {
        return temperature;
    }

    void setTemperature(int newTemp) {
        temperature = newTemp;
    }

    void printDayInfo(const std::string& prefix) const {
        std::cout << prefix << " " << name << " has " << temperature << " degrees.\n";
    }
};