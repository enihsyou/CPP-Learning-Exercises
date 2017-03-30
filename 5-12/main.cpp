#include <iostream>
void fn1() {
  static int n;
  std::cout << ++n << std::endl;
}
int main() {
  const int n = 10;
  for (int i = 0; i < n; ++i) {
    fn1();
  }

  return 0;
}
