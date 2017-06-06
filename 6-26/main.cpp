#include <iostream>
#include <random>
#include <memory>
#include <iomanip>


int main() {
    unsigned row, column;
    std::random_device r;
    std::default_random_engine engine(r());
    int *data;
    std::cin >> row >> column;
    std::uniform_int_distribution<int> uniform_dist(1, row * column);
    data = new int[column * row]{0};
    std::cout << "转置前" << std::endl;
    const int width = static_cast<int>(std::log10(row * column)) + 2;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            data[i * column + j] = uniform_dist(engine);
            std::cout << std::setw(width) << data[i * column + j];
        }
        std::cout << std::endl;
    }
    std::cout << "转置后" << std::endl;
    int *temp = new int[row * column]{0};
    int count = 0;
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            temp[count] = data[j * column + i];
            std::cout << std::setw(width) << temp[count];
            count++;
        }
        std::cout << std::endl;
    }
    delete[] data;
    data = temp;
    return 0;
}
