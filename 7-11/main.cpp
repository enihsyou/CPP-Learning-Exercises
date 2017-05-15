#include <iostream>


struct BaseClass {
    void fn1() { std::cout << "BaseClass fn1" << std::endl; };

    void fn2() { std::cout << "BaseClass fn2" << std::endl; };

};

struct DerivedClass : public BaseClass {
    void fn1() { std::cout << "DerivedClass fn1" << std::endl; };

    void fn2() { std::cout << "DerivedClass fn2" << std::endl; };
};

int main() {
    DerivedClass d, *dp = &d;
    BaseClass *bp = &d;
    d.fn1();
    bp->fn1();
    dp->fn1();
    d.fn2();
    bp->fn2();
    dp->fn2();
    return 0;
}
