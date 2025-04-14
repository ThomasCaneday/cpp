#include <string>
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <fstream>

std::ostream_iterator<std::string> oo(std::cout);

std::istream_iterator<std::string> ii(std::cin);
std::istream_iterator<std::string> eos;

int main() {
    // *oo = "Hello, "; // meaning cout << "Hello, "
    // ++oo;
    // *oo = "world!\n"; // meaning cout << "world!\n"

    // std::string s1 = *ii;
    // ++ii;
    // std::string s2 = *ii;
    // std::cout << s1 << ' ' << s2 << '\n';


    std::string from, to;
    std::cin >> from >> to; // get source and target file names

    std::ifstream is(from.c_str()); // input stream
    std::istream_iterator<std::string> ii (is);
    std::istream_iterator<std::string> eos;

    std::vector<std::string> b(ii, eos);
    sort(b.begin(), b.end());

    std::ofstream os(to.c_str());
    std::ostream_iterator<std::string> oo(os, "\n");

    unique_copy(b.begin(), b.end(), oo);

    return !is.eof() || !os;
}