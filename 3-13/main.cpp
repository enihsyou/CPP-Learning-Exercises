#include <iostream>
long long Fibonacci(long long before) {
  if (before == 1 || before == 2) return 1;
  return Fibonacci(before - 1) + Fibonacci(before - 2);
}
int main() {
  std::cout << "Fibonacci数列，输入序号：" << std::endl;
  int index;
  std::cin >> index;
  std::cout << Fibonacci(index);
  return 0;
}
