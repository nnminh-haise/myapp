﻿#include <iostream>
#include <string>

void printMessage(std::string message, int& error) {
    if (message.length() == 0) {
        error = 1;
        std::cout << "Message can not be empty!" << std::endl;
        return;
    }

    std::cout << message << std::endl;
    error = 0;
}
int main() {
    int error = 0;
    printMessage("A simple Git course", error);
}
