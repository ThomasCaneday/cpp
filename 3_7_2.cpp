#include <iostream>
#include <string>
#include <vector>

template<class T> class Vec : public std::vector<T> {
public:
    Vec() : std::vector<T>() {}
    Vec(int s) : std::vector<T>(s) {}

    T& operator[](int i) { return this->at(i); }
    const T& operator[](int i) const { return this->at(i); }
};

struct Entry {
    std::string name;
    int number;
};

Vec<Entry> phone_book(1000);

void print_entry(int i) { // simple use, exactly as for vector
    std::cout << phone_book[i].name << ' ' << phone_book[i].number << "\n";
}

// void add_entries(int n) { // increase size by n
//     phone_book.resize(phone_book.size() + n);
// }

void f() {
    try {
        for (int i = 0; i < 10000; i++) print_entry(i);
    }
    catch(std::out_of_range) {
        std::cout << "range error\n";
    }
}

int main() {
    try {
        // code
    }
    catch (std::out_of_range) {
        std::cerr << "range error\n";
    }
}