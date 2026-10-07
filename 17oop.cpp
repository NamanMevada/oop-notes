/* 
====================================================================
                            ABSTRACTION
====================================================================

1. DEFINITION:
   "Hiding all unnecessary details and show hing only important parts."

2. WAYS TO IMPLEMENT ABSTRACTION:
   - Simple way: Access Modifiers (private, protected, public).
   - Second way (Core OOPs): Abstract Classes.

3. ABSTRACT CLASS - KEY POINTS:
   --> An abstract class cannot create any object.
   --> It is a blueprint for other classes.
   --> Abstract classes are used to provide a base class from which 
       other classes can be derived.
   --> They cannot be instantiated and are meant to be inherited.
       (* Note: "Instance" means Object *)
   --> Abstract classes are typically used to define interfaces 
       (rules/contracts) for derived classes.
   --> Must contain at least one Pure Virtual Function (virtual void func() = 0;).

====================================================================
*/






#include <iostream>
#include <string>
using namespace std;

// Abstract Class
class Shape {
public:
    // Pure Virtual Function (= 0 means no definition here, only an idea/rule)
    virtual void draw() = 0; 
}; 

// Derived Class
class Circle : public Shape {
public:
    void draw() {
        cout << "drawing a circle\n";
    }
};

int main() {
    // Shape s; // ❌ Error: Cannot create object of abstract class
    Circle c1;
    c1.draw();

    return 0;
}   








