#define _USE_MATH_DEFINES
#include <iostream>

namespace {
class Circle {
public:
  explicit Circle(const double radius)
    : radius_{radius} {}

  double getArea() const {
    return radius_ * radius_ * M_PI;
  }

  double radius() const { return radius_; }
private:
  double radius_;
};
}// namespace

int main() {
  const int RADIUS = 3;
  Circle circle = Circle(RADIUS);
  std::cout << "半径为 " << circle.radius() << " 的圆的面积是：" << circle.getArea() << std::endl;
  return 0;
}
