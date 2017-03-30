#include <iostream>
int GCD(int a, int b) {
  if (b) while ((a %= b) && (b %= a));
  return a + b;
}
int LCM(int a, int b) {
  return a * b / GCD(a, b);
}
int main() {
  int number1, number2;
  std::cout << "输入两个数字计算最大公约数和最大公倍数：" << std::endl;
  std::cin >> number1 >> number2;
  std::cout << "最大公约数：" << GCD(number1, number2) << std::endl;
  std::cout << "最小公倍数：" << LCM(number1, number2) << std::endl;
  return 0;
}
