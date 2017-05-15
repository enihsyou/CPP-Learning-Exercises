#include <iostream>


struct Mammal {
    Mammal() { std::cout << "Mammal constructor." << std::endl; }

    virtual ~Mammal() { std::cout << "Mammal destructor." << std::endl; }
};

struct Dog : public Mammal {
    Dog() { std::cout << "Dog constructor." << std::endl; }

    virtual ~Dog() { std::cout << "Dog destructor." << std::endl; }
};


int main() {
    {
        Dog dog;
    }
    return 0;
}
