#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int year;

public:
    Car(const std::string& b, int y) : brand(b), year(y) {}

    void displayInfo() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }

    std::string getBrand() {
        return brand;
    }

    void setBrand(const std::string& b) {
        brand = b;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() {
        return year;
    }

protected:
    int mileage;

    void setMileage(int m) {
        mileage = m;
    }

public:
    void updateMileage(int m) {
        setMileage(m);
    }

    void displayMileage() {
        std::cout << "Mileage: " << mileage << " km" << std::endl;
    }
};