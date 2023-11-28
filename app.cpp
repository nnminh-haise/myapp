#include <iostream>
#include <string>

int printMessage(std::string message, std::string author) {
    if (message.length() == 0) {
        return 1;
    }

    std::cout << "[" << author << "]: ";
    std::cout << message << std::endl;
    return 0;
}
int main() {
    int error = printMessage("A simple Git course", "nnminh");
}
