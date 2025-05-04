//struct with pointer
#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person person = {"John", 30};
    Person* ptr = &person;
    Person** ptrPtr = &ptr;

    std::cout << "Person's name: " << person.name << std::endl;
    std::cout << "ptr points to: " << ptr->name << " (Age: " << ptr->age << ")" << std::endl;
    std::cout << "ptrPtr points to: " << (*ptrPtr)->name << " (Age: " << (*ptrPtr)->age << ")" << std::endl;

    return 0;
}