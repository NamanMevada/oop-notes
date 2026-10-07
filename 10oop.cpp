//  copy  Constructor example //

/*

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    double price;

public:
    Book(string booktitel, double bookprice)
    {
        title = booktitel;
        price = bookprice;
    }
    Book(const Book &old)
    {
        title = old.title;
        price = old.price;
        cout << "Book Cloned Successfully!" << endl;
    }

    void display()
    {
        cout << "Title : " << title << endl;
        cout << "price : " << price << endl;
    }
};

int main()
{

    Book b1("C++ Mastery", 450.0);
    Book b2 = b1;
    b1.display();
    b2.display();
    return 0;
}

*/

//----------------------------------------------------------------------------------

/*

#include <iostream>
#include <string>
using namespace std;

class order
{
private:
    int orderId;
    string customerName;
    double itemPrice;

public:
    order()
    {
        orderId = 0;
        customerName = "Guest";
        itemPrice = 0.0;
    }
    order(int id, string name, double price)
    {
        orderId = id;
        customerName = name;
        if (price > 0)
        {
            itemPrice = price;
        }
        else
        {
            itemPrice = 0.0;
        }
        cout << "Order Created for " << customerName << endl;
    }
    order(const order &old)
    {
        orderId = old.orderId + 1;
        customerName = old.customerName;
        itemPrice = old.itemPrice;
        cout << "Re-ordered / Cloned with new Order ID!" << endl;
    }
    void applyDiscount(double percentage)
    {
        if (percentage > 0 && percentage <= 50)
        {
            itemPrice -= (itemPrice * percentage / 100);
        }
    }
    void displayOrder()
    {
        cout << "OrderID : " << orderId << endl;
        cout << "CustomerName : " << customerName << endl;
        cout << "Price : " << itemPrice << endl;
    }
};
int main()
{

    order o1;
    order o2(101, "Naman", 1500.0);
    order o3 = o2;
    o3.applyDiscount(10);
    o2.displayOrder();
    o3.displayOrder();

    return 0;
}

*/


// this is special pointern in C++ that point current object. 

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string Name;
    double salary;

public:
    Employee()
    {
        empId = 0;
        Name = "Not Assigned";
        salary = 0.0;
    }
    Employee(int empId, string Name, double salary)
    {
        this->empId = empId;
        this->Name = Name;
        if (salary > 0)
        {
            this->salary = salary;
        }
        else
        {
            this->salary = 0.0;
        }
    }
    Employee(const Employee &old)
    {
        empId = old.empId + 100;
        Name = old.Name;
        salary = old.salary + (old.salary * 0.10);
    }
    void updateSalary(double newsalary)
    {
        if (newsalary > salary)
        {
            salary = newsalary;
        }
    }
    void displayProfile()
    {
        cout << "EmployeeID : " << empId << endl;
        cout << "EmployeeName : " << Name << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main()
{

    Employee e1(501, "Naman", 50000.0);
    Employee e2 = e1;

    e2.updateSalary(45000.0);
    e2.updateSalary(60000.0);

    e1.displayProfile();
    e2.displayProfile();

    return 0;
}
