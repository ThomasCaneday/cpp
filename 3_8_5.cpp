// Algorithms Using Member Functions
#include <algorithm>
#include <list>
#include <iostream>
#include <functional>

class Shape {
public:
    // Using const here allows us to call draw using std::mem_fn on const-qualified objects.
    void draw() const {
        std::cout << "Drawing Shape" << std::endl;
    }
};


void g(std::list<Shape*>& sh) {
    for_each(sh.begin(), sh.end(), std::mem_fn(&Shape::draw));
}

int main() {
    // Create a list of Shape pointers.
    std::list<Shape*> shapes;
    
    // Create one or more Shape objects.
    Shape s;
    shapes.push_back(&s);
    
    // Call the function g with the list of shapes.
    g(shapes);
    
    return 0;
}