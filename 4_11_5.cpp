

#include <iostream>
#include <limits>
int main() {
    std::cout << "Largest char == " << std::numeric_limits<char>::max() << '\n';
    std::cout << "Smallest char == " << std::numeric_limits<char>::min() << '\n';

    std::cout << "Largest short == " << std::numeric_limits<short>::max() << '\n';
    std::cout << "Smallest short == " << std::numeric_limits<short>::min() << '\n';

    std::cout << "Largest int == " << std::numeric_limits<int>::max() << '\n';
    std::cout << "Smallest int == " << std::numeric_limits<int>::min() << '\n';

    std::cout << "Largest long == " << std::numeric_limits<long>::max() << '\n';
    std::cout << "Smallest long == " << std::numeric_limits<long>::min() << '\n';

    std::cout << "Largest float == " << std::numeric_limits<float>::max() << '\n';
    std::cout << "Smallest float == " << std::numeric_limits<float>::min() << '\n';

    std::cout << "Largest double == " << std::numeric_limits<double>::max() << '\n';
    std::cout << "Smallest double == " << std::numeric_limits<double>::min() << '\n';

    std::cout << "Largest long double == " << std::numeric_limits<long double>::max() << '\n';
    std::cout << "Smallest long double == " << std::numeric_limits<long double>::min() << '\n';

    std::cout << "Largest unsigned == " << std::numeric_limits<unsigned>::max() << '\n';
    std::cout << "Smallest unsigned == " << std::numeric_limits<unsigned>::min() << '\n';
}