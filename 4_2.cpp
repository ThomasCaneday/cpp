#include <iostream>

void f(int a, int b) {
    bool b1 = a==b;
    if(b1) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }
}

void g() {
    bool a = true;
    bool b = true;

    bool x = a+b;
    bool y = a|b;

    std::cout << a << '\n' << b << '\n' << x << '\n' << y << '\n';
}

int main() {
    f(4,5);
    f(5,5);

    bool b = 7;
    std::cout << "7 becomes " << b << '\n';

    g();

    return 0;
}