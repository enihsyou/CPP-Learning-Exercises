#include <iostream>


using namespace std;

int main() {
    ios_base::fmtflags original_flags = cout.flags(); // 保存进入函数时的初始状态
    cout << 812 << '|';
    cout.setf(ios_base::left, ios_base::adjustfield); // 设置左对齐，
    cout.width(10); // 设置宽度，一次性
    cout << 813 << 815 << '\n';
    cout.unsetf(ios_base::adjustfield); // 取消左对齐
    cout.precision(2); // 设置精度
    cout.setf(ios_base::uppercase | ios_base::scientific); // 科学计数法，大写E
    cout << 813.0;
    cout.flags(original_flags); // 还原状态
    return 0;
}
