// Print sizes of fundamental types, a few pointer types, and a few enumerations of your choice

#include <iostream>
int main() {
    std::cout << "Size of bool: " << sizeof(bool) << '\n';
    std::cout << "Size of char: " << sizeof(char) << '\n';
    std::cout << "Size of int: " << sizeof(int) << '\n';
    std::cout << "Size of double: " << sizeof(double) << '\n' << '\n';

    // 64-bit architecture (64 bits, 8 bytes)
    std::cout << "Size of bool pointer: " << sizeof(bool*) << '\n';
    std::cout << "Size of char pointer: " << sizeof(char*) << '\n';
    std::cout << "Size of int pointer: " << sizeof(int*) << '\n';
    std::cout << "Size of double pointer: " << sizeof(double*) << '\n' << '\n';

    enum { ASM, AUTO, BREAK };
    std::cout << "Size of ASM enum: " << sizeof(ASM) << '\n';
    std::cout << "Size of AUTO enum: " << sizeof(AUTO) << '\n';
    std::cout << "Size of BREAK enum: " << sizeof(BREAK) << '\n';
    std::cout << "ASM == " << ASM << '\n';
    std::cout << "AUTO == " << AUTO << '\n';
    std::cout << "BREAK == " << BREAK << '\n' << '\n';

    enum e1 { dark, light };
    enum e2 { a = 3, b = 9 };
    enum e3 { min = -10, max = 1000000 };
    std::cout << "Size of e1 enum: " << sizeof(e1) << '\n';
    std::cout << "Size of e2 enum: " << sizeof(e2) << '\n';
    std::cout << "Size of e3 enum: " << sizeof(e3) << '\n';
    std::cout << "Size of dark e1 enum: " << sizeof(dark) << '\n';
    std::cout << "Size of light e1 enum: " << sizeof(light) << '\n';
    std::cout << "Size of a e2 enum: " << sizeof(a) << '\n';
    std::cout << "Size of b e2 enum: " << sizeof(b) << '\n';
    std::cout << "Size of min e3 enum: " << sizeof(min) << '\n';
    std::cout << "Size of max e3 enum: " << sizeof(max) << '\n' << '\n';

    enum test : uint8_t {};
    enum test2 : unsigned char {};
    enum test3 : unsigned int {};
    std::cout << "Size of test enum: " << sizeof(test) << '\n';
    std::cout << "Size of test2 enum: " << sizeof(test2) << '\n';
    std::cout << "Size of test3 enum: " << sizeof(test3) << '\n';
}