#include <iostream>
#include <random>
#include <memory>


int main() {
    unsigned row, column;
    std::random_device r;
    std::default_random_engine engine(r());
    int *data;
    std::cin >> row >> column;
    std::uniform_int_distribution<int> uniform_dist(1, row * column);
    data = new int[column * row]{0};

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            data[i * row + j] = uniform_dist(engine);
            std::cout << data[i * row + j] << " ";
        }
        std::cout << std::endl;
    }
    int *temp = new int[row * column]{0};
    int count = 0;
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            temp[count] = data[i + j * column];
            std::cout << temp[count] << " ";
            count++;
        }
        std::cout << std::endl;
    }
    delete[] data;
    data = temp;
    return 0;
}
