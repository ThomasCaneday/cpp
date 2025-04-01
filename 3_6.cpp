#include <iostream>

int main()
{
    const float factor = 2.54; // 1 inch equals 2.54 cm
    float x, in, cm;
    char ch = 0;

    std::cout << "enter length then type: ";

    std::cin >> x; // read a floating-point number
    std::cin >> ch; // read a suffix

    switch(ch) {
    case 'i': // inch
        in = x;
        cm = x*factor;
        break;
    case 'c': // cm
        in = x/factor;
        cm = x;
        break;
    default:
        in = cm = 0;
        break;
    }

    std::cout << in << " in = " << cm << " cm\n";
}
