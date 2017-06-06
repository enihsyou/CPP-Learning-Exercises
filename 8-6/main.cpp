#include <iostream>


struct Shape {
    virtual double getArea() = 0;
    virtual double getPerim() = 0;
};

struct Rectangle : public Shape {
    double width, height;

    Rectangle(double width, double height) : width(width), height(height) { }

    double getArea() { return width * width; };

    double getPerim() { return width + width + height + height; };
};

struct Circle : public Shape {
    double radius;

    Circle(double radius) : radius(radius) { }

    double getArea() { return 3.1415926535897932385 * radius * radius; };

    double getPerim() { return 6.2831853071795864769 * radius; };
};


int main() {
    Rectangle rectangle = Rectangle(3, 4);
    Circle circle = Circle(4);
    std::cout << rectangle.getArea() << std::endl;
    std::cout << rectangle.getPerim() << std::endl;
    std::cout << circle.getArea() << std::endl;
    std::cout << circle.getPerim() << std::endl;
    return 0;
}
