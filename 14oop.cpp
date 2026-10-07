/*

#include <iostream>
#include <string>
using namespace std;

// base class

class Vehicle
{
protected:
    string brand;
    int maxspeed;

public:
    Vehicle(string a, int s)
    {
        brand = a;
        maxspeed = s;
    }
    void showinfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Max Speed: " << maxspeed << endl;
    }
};

class Car : public Vehicle
{

protected:
    int seates;

public:
    Car(string a, int s, int seates) : Vehicle(a, s)
    {
        this->seates = seates;
    }
    void showcarinfor()
    {
        cout << "seates : " << seates << endl;
    }
};

class ElectricCar : public Car
{
public:
    int batteryCapacity;
    ElectricCar(string a, int s, int seates, int batteryCapacity) : Car(a, s, seates)
    {
        this->batteryCapacity = batteryCapacity;
    }
    void showElectricCarInfo()
    {
        showinfo();
        showcarinfor();
        cout << "Battery Capacity : " << batteryCapacity << " kWh" << endl;
    }
};
int main()
{
    ElectricCar e1("Tesla", 250, 5, 100);
    e1.showElectricCarInfo();

    return 0;
}

*/

//----------------------------------------------------------------------------------//

/*
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    double salary;

public:
    Employee()
    {
        empId = 0;
        salary = 0.0;
        cout << "Employee default Constructor Called" << endl;
    }

    Employee(int id, double salary)
    {
        this->empId = id;
        this->salary = salary;
        cout << "Employee Parameterized Constructor Called" << endl;
    }

    double getSalary()
    {
        return salary;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    int getId()
    {
        return empId;
    }

    ~Employee()
    {
        cout << "Employee Destructor : " << getId() << "Destroyed" << endl;
    }
};

class Devloper : public Employee
{
private:
    string lang;

public:
    Devloper(int id, double salary, string lang) : Employee(id, salary)
    {
        this->lang = lang;
    }
    void displayDevinfo()
    {
        cout << "Employee Id : " << getId() << endl;
        cout << "Employee Salary : " << getSalary() << endl;
        cout << "Employee Language : " << lang << endl;
    }
    ~Devloper()
    {
        cout << "Devloper Destructor : " << getId() << " Destroyed" << endl;
    }
};

int main()
{

    Devloper d1(101, 25000, "C++");
    d1.displayDevinfo();
    d1.setSalary(30000);
    d1.displayDevinfo();
    return 0;
}

*/

//----------------------------------------------------------------------------------//

#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    int accNo;
    double balance;

public:
    Account(int accNo, double balance)
    {
        this->accNo = accNo;
        this->balance = balance;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            this->balance += amount;
            cout << "Deposit successful. New balance: " << this->balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= this->balance)
        {
            this->balance -= amount;
            cout << "Withdrawal successful. New balance: " << this->balance << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
    double getBalance()
    {
        return balance;
    }
};

class Security
{
protected:
    int pin;

public:
    Security(int pin)
    {
        this->pin = pin;
    }
    bool verifyPin(int inputPin)
    {
        if (inputPin == pin)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class ATMUser : public Account, public Security
{
private:
    string userName;
    int failedAttempts = 0;

public:
    ATMUser(string userName, int accNo, double balance, int pin)
        : Account(accNo, balance), Security(pin)
    {
        this->userName = userName;
        this->failedAttempts = 0;
    }

    void performSecureWithdrawal(int inputPin, double amount)
    {
        if (failedAttempts >= 3)
        {
            cout << "CARD BLOCKED! Please contact bank." << endl;
            return;
        }

        if (verifyPin(inputPin))
        {
            cout << "PIN Verified for " << userName << "!" << endl;
            failedAttempts = 0;
            withdraw(amount);
        }
        else
        {
            failedAttempts++;
            cout << "Invalid PIN! Attempts left: " << (3 - failedAttempts) << endl;
            if (failedAttempts >= 3)
            {
                cout << "CARD BLOCKED! Too many failed attempts." << endl;
            }
        }
    }
};

int main()
{

    ATMUser user1("Naman", 1001, 10000.0, 1234);

    cout << "--- Attempt 1: Wrong PIN ---" << endl;
    user1.performSecureWithdrawal(9999, 2000);

    cout << "\n--- Attempt 2: Correct PIN but more amount ---" << endl;
    user1.performSecureWithdrawal(1234, 15000);

    cout << "\n--- Attempt 3: Correct PIN & Valid amount ---" << endl;
    user1.performSecureWithdrawal(1234, 3000);
    return 0;
}