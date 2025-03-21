// Page 52
#include <string>
#include <iostream>
#include <vector>

vector<Entry> phone_book(1000);

void print_entry(int i) {
    std::cout << phone_book[i].name << ' ' << phone_book[i].number << '\n';
}

void f(vector<Entry>& v) {
    vector<Entry> v2 = phone_book;
    v = v2;
}

int main() {
    print_entry(1);
}