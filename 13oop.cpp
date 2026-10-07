/*
================================================================================
                         TYPES OF INHERITANCE IN C++
================================================================================

Total 5 Types of Inheritance in C++:
1. Single Inheritance
2. Multilevel Inheritance
3. Multiple Inheritance
4. Hierarchical Inheritance
5. Hybrid Inheritance (includes Diamond Problem & virtual keyword)

================================================================================
1. SINGLE INHERITANCE
--------------------------------------------------------------------------------
Definition:
A single derived class inherits properties and behaviors from a single base class.

Diagram:
    [ Base (A) ]
         |
         v
   [ Derived (B) ]
================================================================================
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};


/*
================================================================================
2. MULTILEVEL INHERITANCE
--------------------------------------------------------------------------------
Definition:
A derived class inherits from another derived class, forming a chain.
(e.g., Grandparent -> Parent -> Child)

Diagram:
   [ Class A ]  (Grandparent)
        |
        v
   [ Class B ]  (Parent - derived from A)
        |
        v
   [ Class C ]  (Child - derived from B)
================================================================================
*/

class Person {
public:
    void breathe() {
        cout << "Person is breathing..." << endl;
    }
};

class Employee : public Person {
public:
    void work() {
        cout << "Employee is working..." << endl;
    }
};

class Programmer : public Employee {
public:
    void code() {
        cout << "Programmer is coding..." << endl;
    }
};


/*
================================================================================
3. MULTIPLE INHERITANCE
--------------------------------------------------------------------------------
Definition:
A single derived class inherits from TWO or MORE base classes simultaneously.

Diagram:
   [ Base 1 (A) ]     [ Base 2 (B) ]
           \               /
            \             /
             v           v
           [ Derived (C) ]

Syntax:
   class Child : public Parent1, public Parent2 { ... };
================================================================================
*/

class Father {
public:
    void height() {
        cout << "Tall height from father" << endl;
    }
};

class Mother {
public:
    void eyeColor() {
        cout << "Brown eyes from mother" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void hobbies() {
        cout << "Loves coding" << endl;
    }
};


/*
================================================================================
4. HIERARCHICAL INHERITANCE
--------------------------------------------------------------------------------
Definition:
MULTIPLE derived classes inherit from a SINGLE base class.

Diagram:
              [ Base (A) ]
               /        \
              /          \
             v            v
     [ Derived 1 (B) ]   [ Derived 2 (C) ]
================================================================================
*/

class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing Circle..." << endl;
    }
};

class Rectangle : public Shape {
public:
    void drawRect() {
        cout << "Drawing Rectangle..." << endl;
    }
};


/*
================================================================================
5. HYBRID INHERITANCE (DIAMOND PROBLEM)
--------------------------------------------------------------------------------
Definition:
Combination of two or more types of inheritance 
(commonly Multilevel + Multiple = Diamond Problem).

Problem:
If Class B and Class C both inherit from Class A, and Class D inherits from 
both B and C, Class D gets TWO copies of Class A's members -> Ambiguity error!

Solution:
Use the 'virtual' keyword when inheriting from the common ancestor:
class B : virtual public A { ... };
class C : virtual public A { ... };

Diagram:
              [ Class A ]
               /       \
   (virtual)  /         \  (virtual)
             v           v
       [ Class B ]   [ Class C ]
             \           /
              \         /
               v       v
              [ Class D ]
================================================================================
*/

class Base {
public:
    int data = 100;
};

// virtual inheritance prevents duplicate copies of Base
class Derived1 : virtual public Base {};
class Derived2 : virtual public Base {};

class FinalChild : public Derived1, public Derived2 {
public:
    void showData() {
        // Without 'virtual', this causes compilation error: "ambiguous access"
        cout << "Data: " << data << endl;
    }
};