#include <iostream>

int cube(int value) {
    return value * value * value;
}

int count(int* arr, int arrSize, int target) {
    int counter = 0;
    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] == target) {
            ++counter;
        }
    }
    return counter;
}

int main() {
    std::cout << cube(3) << std::endl;
}