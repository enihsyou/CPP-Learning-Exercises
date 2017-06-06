#include <iostream>
#include <tuple>


struct Point {
    double x, y;

    Point(double x, double y) : x(x), y(y) { }

    Point &operator++() {
        x += 1;
        y += 1;
        return *this;
    }

    Point operator++(int) {
        Point temp(x, y);
        operator++();
        return temp;
    }

    friend std::ostream &operator<<(std::ostream &os, const Point &point) {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }
};

int main() {
    Point p(3,4);
    std::cout << p << std::endl;
    std::cout << p++ << std::endl;
    std::cout << ++p << std::endl;
    std::cout << p << std::endl;
    return 0;
}
