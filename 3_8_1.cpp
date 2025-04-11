#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <iterator>

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
    
    return 0;
}