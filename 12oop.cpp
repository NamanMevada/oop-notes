/*   Inheritance */

/*
      one of the imporant 4 pillars of OOPs concept is Inheritance.



      ---->   when poperties and member fucntion of base class are passed to the derived class.

                class A(parent , base)
                         |
                         |
                class B(child,derived) [inherit]

       inertiance use  for code reusability .


   // when inheratance and we make child class object then first base class constructor will be called
      and then child class constructor will be called.

   */

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age; // default constrcor call

    // Person()
    // {
    //     cout << "Parent class constructor called" << endl;
    // }

    // ~Person()
    // {
    //     cout << "Parent class destructor called" << endl;
    // }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
class Student : public Person
{

public:
    int rollNo;

    Student(string name, int age, int rollNo) : Person(name, age)
    {
        this->rollNo = rollNo;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }

    // Student()
    // {
    //     cout << "child class constructor called" << endl;
    // }
    // ~Student()
    // {
    //     cout << "child class destructor called" << endl;
    // }
};

int main()
{
    Student s1("Naman", 20, 101);

    s1.getInfo();

    return 0;
}

/* Mode of Inheritance */

/*                                   (derived class)
    Baseclass            private      protected        public

    private            not inherited  not inherited  not inherited
    protected           private         protected      protected
    public              private         protected      public
*/
