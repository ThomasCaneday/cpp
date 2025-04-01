// Program to tell you the integer value of any character inputted
// Page ~72
#include <iostream>

int main() {
    char c;
    std::cin >> c;
    std::cout << "the value of `" << c << "` is " << int(c) << '\n';
}