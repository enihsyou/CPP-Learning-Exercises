#include <iostream>
int main() {
    int *vector = new int[5];
    for (int i: {0, 1, 2, 3, 4}) { std::cin >> vector[i]; }
    for (int i: {0, 1, 2, 3}) { std::cout << vector[i] << " "; }
    std::cout << vector[4] << std::endl;
    delete[](vector);
    return 0;
}
