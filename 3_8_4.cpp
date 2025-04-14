#include <map>
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>

std::map<std::string, int> histogram;

void record(const std::string& s) {
    histogram[s]++;
}

void print(const std::pair<const std::string, int>& r) {
    std::cout << r.first << ' ' << r.second << '\n';
}

bool gt_42(const std::pair<const std::string, int>& r) {
    return r.second>42;
}

void f(std::map<std::string, int>& m) {
    typedef std::map<std::string, int>::const_iterator MI;
    MI i = find_if(m.begin(), m.end(), gt_42);
}

void g(const std::map<std::string, int>& m) {
    int c42 = count_if(m.begin(), m.end(), gt_42);
}

int main() {
    std::istream_iterator<std::string> ii(std::cin);
    std::istream_iterator<std::string> eos;

    for_each(ii, eos, record);
    for_each(histogram.begin(), histogram.end(), print);

    return 0;
}