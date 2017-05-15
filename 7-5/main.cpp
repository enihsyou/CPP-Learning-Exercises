#include <iostream>
#include <cmath>


#define _USE_MATH_DEFINES

struct Shape {
    virtual double getArea() = 0;
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double width, double height) : width(width), height(height) { }

public:
    virtual double getArea() override {
        if (width < 0 || height < 0) throw std::logic_error("Negative side length.");
        return width * height;
    }
};

class Square : public Rectangle {
public:
    Square(double width) : Rectangle(width, width) { }
};

class Circle : public Shape {
    double radius;
public:
    virtual double getArea() override {
        if (radius < 0) throw std::logic_error("Negative side radius.");
        return radius * radius * M_PI;
    }
};

int main() {
    return 0;
}
