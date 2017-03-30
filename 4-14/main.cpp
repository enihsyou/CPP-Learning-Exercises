#include <iostream>
class Tree {
 private:
  int ages;
 public:
  Tree(const int age) : ages{age} {}
  int grow(const int years);
  void age() const;
};
int Tree::grow(const int years) {
  ages += years;
  return ages;
}
void Tree::age() const {
  std::cout << "Age: " << ages << std::endl;
}
int main() {
  Tree *tree = new Tree(10);
  tree->age();
  tree->grow(10);
  tree->age();
  delete (tree);
  return 0;
}
