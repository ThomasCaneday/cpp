

#include <iostream>
int main() {
    for (char letter = 'a'; letter != 'z' + 1; letter++) {
        std::cout << letter << ' ';
        std::cout << (int) letter << ' ';
        printf("0x%02X\n", letter);
    }
    std::cout << '\n' << "---------------------------------------------" << '\n';

    for (char num = '0'; num <= '9'; num++) {
        std::cout << num << ' ';
        std::cout << (int) num << ' ';
        printf("0x%02X\n", num);
    }
    std::cout << '\n' << "---------------------------------------------" << '\n';

    for (char ch = '!'; ch != '~' + 1; ch++) {
        std::cout << ch << ' ';
        std::cout << (int) ch << ' ';
        printf("0x%02X\n", ch);
    }
}