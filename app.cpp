#include <iostream>

int cube(int value) {
    return value * value * value;
}

int main() {
    std::cout << cube(3) << std::endl;
}