/*
                   // Polymorphism //

    poly  : multiple
    morph : forms

    // When an object has the ability to act or behave in different forms 
       depending on the context, that is called Polymorphism. //

    Definition: Polymorphism is the ability of an object to take different forms 
                or behave in different ways depending on the context in which they are used.

    --> Two types of Polymorphism:
        1) Compile Time Polymorphism (Static Binding)
        2) Run Time Polymorphism (Dynamic Binding)
*/

/*
    ==================================================
    1) Compile Time Polymorphism :-
    ==================================================
    - Static / Early Binding
    - Examples: Function Overloading, Constructor Overloading, Operator Overloading

    # Function Overloading:
    Same function name, but different parameters (type or number of arguments) within the same class.
*/

#include <iostream>
#include <string>
using namespace std;

class Type
{
public:
    void show(int x)
    {
        cout << "int : " << x << endl;
    }

    void show(char ch)
    {
        cout << "char : " << ch << endl;
    }
};

/*
    ==================================================
    2) Run Time Polymorphism :-
    ==================================================
    - Dynamic / Late Binding
    - Examples: Function Overriding, Virtual Functions

    # Function Overriding:
    - Parent & Child both contain the exact same function signature (same name & same parameters).
    - Child class gives its own different implementation.
    - Achieved using Inheritance.

    # Virtual Function:
    - Member function in base class defined with the keyword "virtual".
    - Overridden in derived (child) class.
    - Dynamic in nature: Resolved at RUN-TIME.
    - KEY CONCEPT: When a Base class POINTER points to a Derived class OBJECT, 
      the "virtual" keyword ensures the Derived class function is executed!
*/

class Parent
{
public:
    void getinfo()
    {
        cout << "parent class info\n";
    }

    virtual void hello()
    {
        cout << "hello from parent\n";
    }
};

class Child : public Parent
{
public:
    void getinfo()
    {
        cout << "child class info\n";
    }

    void hello() override
    {
        cout << "hello from child\n";
    }
};

int main()
{
    // --- 1. Compile Time Overloading Test ---
    Type t1;
    t1.show(101);      // Calls int version
    t1.show('A');      // Calls char version

    // --- 2. Direct Child Calls ---
    Child c1;
    c1.getinfo();      // child class info
    c1.hello();        // hello from child

    // --- 3. The Real Power of Virtual Function (Pointer Concept) ---
    Parent* ptr = &c1; // Base class pointer holding child's address
    
    ptr->getinfo();    // NON-VIRTUAL: Prints "parent class info" (compiler is tricked)
    ptr->hello();      // VIRTUAL: Prints "hello from child" (runtime polymorphism works!)

    return 0;
}

/*
    ==================================================
         DIFFERENCE: Overloading vs Overriding
    ==================================================

    Overloading:
    - Happens within ONE class.
    - Same function name.
    - DIFFERENT parameters (data type or count).
    - Resolved at Compile Time (Fast).
    - Inheritance is NOT required.

    Overriding:
    - Happens between PARENT and CHILD classes.
    - Same function name.
    - EXACTLY SAME parameters.
    - Resolved at Run Time (using 'virtual' keyword & pointers).
    - Inheritance is MANDATORY.
*/