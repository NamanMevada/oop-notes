// Shallow copy & Deep Copy

/*
shallow copy:-

   shallow copy means copy all member value from one object to another.

   - problem comes when we do dynamic memory allocation means
     new keyword or * pointer (only address is copied, not real value).
*/

/*
  Deep copy:-

   Deep copy means allocates new dynamic memory and then copies the actual value.

   - solves pointer problem:
     new keyword use karke alag memory banti hai,
     so changing one object will NOT affect the other object.
*/

// #include <iostream>
// #include <string>
// using namespace std;

// class Number
// {
//    public:
//      int *num;

//    Number(int val){
//      num=new int(val);
//    }
//    Number(const Number&old){
//         num=new int;
//         *num=(*old.num);
//    }
// };

// int main(){

//     Number n1(50);
//     Number n2=n1;

//     *(n2.num) = 100;

//     cout << "n1: " << *(n1.num) << endl;
//     cout << "n2: " << *(n2.num) << endl;

//     return 0;
// }

//-------------------------------------------------------------------//

/*

#include <iostream>
#include <string>
using namespace std;

class ScoreBoard
{

private:
    int *score;

public:
    ScoreBoard(int s)
    {
        score = new int(s);
    }
    ScoreBoard(const ScoreBoard &old)
    {
        score = new int;
        *score = *(old.score);
    }

    void setScore(int s)
    {
        *score = s;
    }

    int getScore()
    {
        return *score;
    }
};

int main()
{

    ScoreBoard p1(250);
    ScoreBoard p2 = p1;
    p2.setScore(500);

    cout << "p1 : " << p1.getScore() << endl;
    cout << "p2 : " << p2.getScore() << endl;
    return 0;
}
*/

/*

*/

/*


#include <iostream>
#include <string>
using namespace std;

class StudentGrades
{
private:
    int size;
    int *marks;

public:
    StudentGrades(int s)
    {
        size = s;
        marks = new int[s];
        for (int i = 0; i < s; i++)
        {
            marks[i] = 0;
        }
    }

    StudentGrades(const StudentGrades &old)
    {
        size = old.size;
        marks = new int[size];
        for (int i = 0; i < size; i++)
        {
            marks[i] = old.marks[i];
        }
    }
    void setMark(int index, int score)
    {
        if (index >= 0 && index < size)
        {
            marks[index] = score;
        }
    }

    void printGrades()
    {
        for (int i = 0; i < size; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl; // નવી લાઇન માટે
    }
};

int main()
{
    StudentGrades s1(3); // 3 વિષયોનો એરે બન્યો
    s1.setMark(0, 85);
    s1.setMark(1, 90);
    s1.setMark(2, 95);

    // Deep Copy
    StudentGrades s2 = s1;

    // હવે ફક્ત s2 ના પહેલા વિષયના માર્ક્સ બદલો
    s2.setMark(0, 40);

    cout << "--- Student 1 Marks ---" << endl;
    s1.printGrades(); // આમાં 85, 90, 95 જ રહેવા જોઈએ!

    cout << "--- Student 2 Marks ---" << endl;
    s2.printGrades(); // આમાં 40, 90, 95 થવા જોઈએ!


    return 0;
}

*/

// #include <iostream>
// #include <string>
// using namespace std;

// class ShopingBag
// {
// private:
//     int itemCount;
//     int *prices;

// public:
//     ShopingBag(int itemCount)
//     {
//         this->itemCount = itemCount;
//         this->prices = new int[itemCount];
//         for (int i = 0; i < itemCount; i++)
//         {
//             prices[i] = 0;
//         }
//     }

//     ShopingBag(const ShopingBag &old)
//     {

//         this->itemCount = old.itemCount;
//         prices = new int[old.itemCount];
//         for (int i = 0; i < old.itemCount; i++)
//         {
//             prices[i] = old.prices[i];
//         }
//     }

//     void setPrice(int index, int itemprice)
//     {

//         prices[index] = itemprice;
//     }

//     int calculateTotal()
//     {
//         int total = 0;
//         for (int i = 0; i < itemCount; i++)
//         {
//             total += prices[i];
//         }
//         return total;
//     }

//     void printPrices()
//     {
//         for (int i = 0; i < itemCount; i++)
//         {
//             cout << " " << prices[i];
//         }
//     }
//     ~ShopingBag()
//     {
//         delete[] prices;
//         cout << "\n[Destructor]: Memory clean thai gayi!" << endl;
//     }
// };

// int main()
// {

//     ShopingBag b1(3);
//     b1.setPrice(0, 100);
//     b1.setPrice(1, 250);
//     b1.setPrice(2, 150);

//     ShopingBag b2 = b1;

//     b2.setPrice(0, 500);

//     b1.printPrices();
//     cout << "Bag 1 Total: " << b1.calculateTotal() << endl;

//     b2.printPrices();
//     cout << "Bag 2 Total: " << b2.calculateTotal() << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Bankaccount
// {
// private:
//     string holderName;
//     double balance;
//     int *transactionHistroy;
//     int historycount;
//     int capacity; // NAYA member

// public:
//     Bankaccount()
//     {
//         holderName = "guest";
//         balance = 0;
//         historycount = 0;
//         capacity = 0; // NAYA
//         transactionHistroy = nullptr;
//     }
//     Bankaccount(string holderName, double balance, int cap)
//     {
//         this->capacity = cap; // NAYA — original size yaad rakhi
//         this->transactionHistroy = new int[cap];
//         this->historycount = 0;
//         for (int i = 0; i < cap; i++)
//         {
//             transactionHistroy[i] = 0;
//         }
//         this->holderName = holderName;
//         this->balance = balance;
//     }

//     Bankaccount(const Bankaccount &old)
//     {
//         capacity = old.capacity;                    // NAYA
//         transactionHistroy = new int[old.capacity]; // BADLA: old.historycount -> old.capacity
//         historycount = old.historycount;
//         for (int i = 0; i < old.historycount; i++)
//         {
//             transactionHistroy[i] = old.transactionHistroy[i];
//         }
//         balance = old.balance;
//     }
//     void deposit(double amount)
//     {
//         balance += amount;
//         transactionHistroy[historycount] = amount;
//         historycount++;
//     }
//     void withdraw(double amount)
//     {
//         if (amount > balance)
//         {
//             cout << "Insufficient funds" << endl;
//         }
//         else
//         {
//             balance -= amount;
//             transactionHistroy[historycount] = -amount;
//             historycount++;
//         }
//     }
//     double getBalance()
//     {
//         return balance;
//     }
//     void DisaplyHistroy()
//     {
//         for (int i = 0; i < historycount; i++)
//         {
//             cout << "transaction " << i + 1 << " : " << transactionHistroy[i] << endl;
//         }
//     }

//     ~Bankaccount()
//     {
//         delete[] transactionHistroy; // NAYA — ye missing tha, memory free karna
//         cout << "Account logged out " << holderName << endl;
//     }
// };

// int main()
// {
//     Bankaccount acc1("Naman", 1000, 5);
//     acc1.deposit(500);
//     acc1.withdraw(200);

//     Bankaccount acc2 = acc1;
//     acc2.deposit(1000);

//     cout << "acc1 balance: " << acc1.getBalance() << endl;
//     cout << "acc2 balance: " << acc2.getBalance() << endl;

//     acc1.DisaplyHistroy();
//     acc2.DisaplyHistroy();

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int salary;
    int *empId;

public:
    Employee()
    {
        name = "Unknown";
        salary = 0;
        empId = nullptr;
    }
    Employee(string name, int salary, int empId)
    {
        this->name = name;
        this->salary = salary;
        this->empId = new int(empId);
    }
    Employee(const Employee &old)
    {
        name = old.name;
        salary = old.salary;
        empId = new int(*old.empId);
    }

    void raiseSalary(int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid raise" << endl;
        }
        else
        {
            salary += amount;
        }
    }
    int getSalary()
    {
        return salary;
    }
    ~Employee()
    {
        cout << "Employee account is close" << endl;
        delete empId;
    }
};

int main()
{
    Employee e1;
    Employee e2("Naman", 25000, 14);
    Employee e3 = e2;

    e3.raiseSalary(1000);
    e2.raiseSalary(-500);

    cout << "Salary : " << e3.getSalary() << endl;
    cout << "Salary : " << e2.getSalary() << endl;
    return 0;
}