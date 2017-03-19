#include <iostream>
#include <cassert>
#include <cmath>

namespace {
class Rectangle {
 public:
  double area() const {
    return std::abs((right_upper_y - left_lower_y) * (right_upper_x - left_lower_x));
  }

  /**
   * \brief 由两点和第三点的角度，计算矩形面积
   * \param radians 以对角线为基轴，第三个点的偏离弧度，
   * \return 矩形面积
   */
  double area(const double radians) const {
    assert(radians > 0 && radians < std::atan(1) * 2);
    auto diagonal = std::hypot(right_upper_y - left_lower_y, right_upper_x - left_lower_x);
    auto width = std::sin(radians) * diagonal;
    auto height = std::cos(radians) * diagonal;
    return width * height;
  }

  Rectangle(const double left_lower_x,
            const double left_lower_y,
            const double right_upper_x,
            const double right_upper_y)
      : left_lower_x{left_lower_x},
        left_lower_y{left_lower_y},
        right_upper_x{right_upper_x},
        right_upper_y{right_upper_y} {}

 private:
  double left_lower_x;
  double left_lower_y;
  double right_upper_x;
  double right_upper_y;
};
}// namespace

int main() {
  Rectangle rectangle = Rectangle(0, 0, 5, 3);
  std::cout << "标准矩形面积：" << rectangle.area() << std::endl;
  std::cout << "最大矩形面积：" << rectangle.area(std::atan(1)) << std::endl;
  return 0;
}
