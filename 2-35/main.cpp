#include <iostream>
#include <iomanip>
#include <cmath>

bool print(int, int);
const int ROWS = 9;

int main() {
  for (int i = 1; i <= ROWS; ++i) {
    for (int j = 1; j <= i; ++j) {
      if (print(j, i) && j < i)std::cout << "    ";
    }
    std::cout << std::endl;
  }
  return 0;
}

bool print(int a, int b) {
  using namespace std;
  cout << setiosflags(ios::right) << a;
  cout << " * ";
  cout << setiosflags(ios::left) << b;
  cout << " == " << setw((int) log10(ROWS * ROWS) + 1) << a * b;
  return true;
}
