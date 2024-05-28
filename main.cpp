#include "Fibonacci.hpp"
#include <iostream>

int main() {
    const int num = 5;
    Fibonacci<num> obj;
    std::cout << Fibonacci<num>::val << std::endl;
}