#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <iterator>
#include <complex>

struct Entry {
    std::string name;
    int number;
};

// Define operator< so that Entries can be sorted.
// This compares by name first, then by number.
bool operator<(const Entry& lhs, const Entry& rhs) {
    if (lhs.name != rhs.name)
        return lhs.name < rhs.name;
    return lhs.number < rhs.number;
}

// Define operator== for equality comparisons used by std::unique_copy.
bool operator==(const Entry& lhs, const Entry& rhs) {
    return lhs.name == rhs.name && lhs.number == rhs.number;
}

// Function f that sorts the vector and copies unique entries to the list.
void f(std::vector<Entry>& ve, std::list<Entry>& le) {
    std::sort(ve.begin(), ve.end());
    std::unique_copy(ve.begin(), ve.end(), std::back_inserter(le));
}

int count(const std::string& s, char c) { // count occurrences of c in s
    int n = 0;
    std::string::const_iterator i = find(s.begin(), s.end(), c);
    while (i != s.end()) {
        ++n;
        i = find(i+1, s.end(), c);
    }
    return n;
}

void f() {
    std::string m = "Mary had a little lamb";
    int a_count = count(m, 'a');
    std::cout << "a_count: " << a_count << '\n';
}

using Complex = std::complex<double>;

template<class C, class T> int count(const C& v, T val) {
    typename C::const_iterator i = find(v.begin(), v.end(), val);
    int n = 0;
    while (i != v.end()) {
        ++n;
        ++i; // skip past the element we just found
        i = find(i, v.end(), val);
    }
    return n;
}

void fUpdated(std::list<Complex>& lc, std::vector<std::string>& vs, std::string s) {
    int i1 = count(lc, Complex(1,3));
    int i2 = count(vs, "Diogenes");
    int i3 = count(s, 'x');
    std::cout << i1 << '\n' << i2 << '\n' << i3 << '\n';
}

void f(std::list<Complex>& lc, std::vector<std::string>& vs, std::string s) {
    int i1 = count(lc.begin(), lc.end(), Complex(1,3));
    int i2 = count(vs.begin(), vs.end(), "Diogenes");
    int i3 = count(s.begin(), s.end(), 'x');
    std::cout << i1 << '\n' << i2 << '\n' << i3 << '\n';
}

void g(char cs[], int sz) {
    int i1 = std::count(&cs[0], &cs[sz], 'z'); // 'z's in array
    int i2 = std::count(&cs[0], &cs[sz/2], 'z'); // 'z's in first half of array
    std::cout << "g function\n" << "i1: " << i1 << '\n' << "i2: " << i2 << '\n';
}

int main() {
    // Initialize a vector of Entry objects with some duplicate values.
    std::vector<Entry> vec = {
        {"Bob", 123456789},
        {"Alice", 987654321},
        {"Alice", 987654321},
        {"Alice", 123456789},
        {"Charlie", 876543210},
        {"Bob", 123456789}
    };

    // Define an empty list to hold the unique entries.
    std::list<Entry> lst;
    
    // Call the function f to sort the vector and copy unique entries.
    f(vec, lst);

    // Output the resulting unique entries.
    std::cout << "Unique Entries:" << std::endl;
    for (const Entry& entry : lst) {
        std::cout << "Name: " << entry.name << ", Number: " << entry.number << std::endl;
    }
    
    f();

    char zs[6] ={'z', 'z', 'z', 'a', 'y', 'z'};
    int x = 6;
    g(zs, x);

    return 0;
}