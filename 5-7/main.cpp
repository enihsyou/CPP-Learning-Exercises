#include <iostream>
class Cat {
 public:
  static int numOfCats;
  Cat() { ++numOfCats; }
  virtual ~Cat() {
    --numOfCats;
    std::cout << numOfCats << std::endl;
  }
  static int getNumOfCats() {
    return numOfCats;
  }
};

int Cat::numOfCats = 0;
int main() {
  const int num = 1000000;
  while (true) {
    Cat **cats = new Cat *[num];
    for (int i = 0; i < num; ++i) {
      Cat *cat = new Cat();
      cats[i] = cat;
      std::cout << "Cat#" << i << ": " << cat->getNumOfCats() << std::endl;
    }
    for (int i = 0; i < num; ++i) {
      delete (cats[i]);
    }
    delete (cats);
  }
  return 0;
}
