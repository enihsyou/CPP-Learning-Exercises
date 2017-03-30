#include <iostream>
double F2C(double temperature) {
  return (temperature - 32) * 5 / 9;
}
int main() {
  std::cout << "输入华氏温度：" << std::endl;
  double input;
  std::cin >> input;
  std::cout << "转换摄氏温度：" << F2C(input) << "°C"<<std::endl;
  return 0;
}
