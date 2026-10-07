// #include <iostream>
// #include <string>
// using namespace std;

// class Vehicle
// {
// public:
//    virtual void startEngine() = 0;
// };

// class Bike : public Vehicle
// {
// public:
//     void startEngine()
//     {
//         cout <<"Bike starts with Kick or Self-start! \n";
//     }
// };

// class Car : public Vehicle
// {
// public:
//     void startEngine()
//     {
//         cout << "Car starts with Push Button! \n";
//     }
// };

// int main()
// {

//     Vehicle *v;

//     Bike b1;
//     v=&b1;
//     v->startEngine();

//      Car c1;
//      v=&c1;
//      v->startEngine();

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    virtual double calculatessalary() = 0;
};

class FulltimeEmployee : public Employee
{
private:
    double monthlySalary;

public:
    FulltimeEmployee(double monthlySalary)
    {
        this->monthlySalary = monthlySalary;
    }
    double calculatessalary()
    {
        return monthlySalary;
    }
};
class PartTimeEmployee : public Employee
{
private:
    int hoursWorked;
    double hourlyRate;

public:
    PartTimeEmployee(int hoursWorked, double hourlyRate)
    {
        this->hoursWorked = hoursWorked;
        this->hourlyRate = hourlyRate;
    }
    double calculatessalary()
    {
        return hoursWorked * hourlyRate;
    }
};

int main()
{

    Employee *emp;

    FulltimeEmployee e1(25000);
    emp = &e1;
    cout << "Full-Time Salary: Rs. " << emp->calculatessalary() << "\n";

    PartTimeEmployee E1(7, 300);
    emp = &E1;
    cout << "Part-Time Salary: Rs. " << emp->calculatessalary() << "\n";

    return 0;
}

