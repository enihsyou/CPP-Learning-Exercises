#include <iostream>

namespace {
class Dog {
 public:
  Dog(const unsigned age, const double weight)
      : age_{age},
        weight_{weight} {}

  unsigned age() const { return age_; }
  double weight() const { return weight_; }
  void set_age(const unsigned age) { age_ = age; }
  void set_weight(const double weight) { weight_ = weight; }

 private:
  unsigned age_;
  double weight_;
};
}// namespace

int main() {
  Dog dog = Dog(10, 100.5);
  std::cout << "狗的年龄: " << dog.age() << "\n狗的重量：" << dog.weight() << std::endl;
  return 0;
}
