#include <iostream>


struct Mammal {
    virtual void speak() {
        std::cout << "Mammal" << std::endl;
    };
};

struct Dog : public Mammal {
    virtual void speak() {
        std::cout << "Dog" << std::endl;
    };
};

int main() {
    Dog dog = Dog();
    dog.speak();
    return 0;
}
