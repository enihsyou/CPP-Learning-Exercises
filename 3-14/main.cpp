#include <iostream>
#include <iomanip>
long double p(long double n, long double x) {
  if (n == 0) return 1;
  if (n == 1) return x;
  if (n > 1) return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
  else throw new std::invalid_argument("n < 0");
}
int main() {
  int n, x;
  std::cout << "Input n and x: " << std::endl;
  std::cin >> n >> x;
  std::cout << std::setprecision((n * n)) << p(n, x) << std::endl;
  return 0;
}
