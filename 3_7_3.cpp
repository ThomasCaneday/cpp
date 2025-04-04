#include <string>
#include <list>
#include <iostream>

struct Entry {
    std::string name;
    int number;
};

std::list<Entry> phone_book;

void print_entry(const std::string& s) {
    typedef std::list<Entry>::const_iterator LI;

    for (LI i = phone_book.begin(); i != phone_book.end(); ++i) {
        const Entry& e = *i; // reference used as shorthand
        if (s == e.name) {
            std::cout << e.name << ' ' << e.number << '\n';
            return;
        }
    }
}

void f(const Entry&e, std::list<Entry>::iterator i, std::list<Entry>::iterator p) {
    phone_book.push_front(e);  // add at beginning
    phone_book.push_back(e);  // add at end
    phone_book.insert(i, e);  // add before the element referred to by 'i'

    phone_book.erase(p);  // remove the element referred to by 'p'
}

int main() {
    // instantiate some sample Entries
    Entry thomas{"Thomas", 123456789};
    Entry tom{"Tom", 987654321};
    Entry tomas{"Tomas", 112345678};

    // Add some Entries to the phone book
    phone_book.push_back(thomas);
    phone_book.push_back(tom);

    // test print_entry function
    std::cout << "Looking up Thomas...\n";
    print_entry("Thomas");

    std::cout << "Current Phone Book:\n";
    for (const auto &entry : phone_book) {
        std::cout << entry.name << " " << entry.number << "\n";
    }
}