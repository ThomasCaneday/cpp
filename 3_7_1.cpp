#include <string>
#include <iostream>
#include <vector>

// Define the Entry type
struct Entry {
    std::string name;
    std::string number;
};

// Create the phone book with the proper namespace qualifier for vector
std::vector<Entry> phone_book(1000);

void print_entry(int i) {
    std::cout << phone_book[i].name << ' ' << phone_book[i].number << '\n';
}

void f(std::vector<Entry>& v) {
    std::vector<Entry> v2 = phone_book;
    v = v2;
}

int main() {
    // For demonstration, you might want to initialize an entry before printing
    phone_book[1] = {"John Doe", "123-456-7890"};
    phone_book[2] = {"Thomas Caneday", "098-765-4321"};
    for (size_t i = 0; i < phone_book.size(); i++) {
        // Optionally, check if the entry is initialized (e.g., non-empty name)
        if (!phone_book[i].name.empty()) {
            print_entry(i);
        }
    }
    print_entry(1);
}