#include <iostream>
class Car;
class Boat {
 public:
  Boat(double weight) : weight(weight) {}
  friend double getTotalWeight(Boat &a, Car &b);
 private:
  double weight;
};
class Car {
 public:
  Car(double weight) : weight(weight) {};
  friend double getTotalWeight(Boat &a, Car &b);
 private:
  double weight;
};
double getTotalWeight(Boat &a, Car &b) {
  return a.weight + b.weight;
}
int main() {
  Boat a = Boat(10000);
  Car b = Car(1000);
  std::cout << getTotalWeight(a, b) << std::endl;
  return 0;
}
