#include <iostream>


int main() {
    std::cout << "输入十进制整数: " << std::endl;
    int input;
    std::cin >> input;
    std::cout << "十进制: " << input << std::endl;
    std::cout << "八进制: " << std::oct << input << std::endl;
    std::cout << "十六进制: " << std::hex << input << std::endl;
    return 0;
}
