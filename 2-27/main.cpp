#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::floor;

int main() {
  start:
  cout << "你考试考了多少分？（0～100）" << endl;
  double score;
  cin >> score;
  switch (static_cast<int>(floor(score / 10.0))) {
    case 10:
    case 9: {
      cout << "优" << endl;
      break;
    }
    case 8: {
      cout << "良" << endl;
      break;
    }
    case 7:
    case 6: {
      cout << "中" << endl;
      break;
    }
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0: {
      cout << "差" << endl;
      break;
    }
    default: {
      cout << "输入有误" << endl;
      goto start;
    }
  }
  return 0;
}
