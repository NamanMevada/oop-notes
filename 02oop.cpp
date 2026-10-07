// class & object

// Objects are real-world entities

// class like blueprint of these entities

// Syantx of Class :

// Techer - entities

// class Teacher{

// };

/*

                      Basic Examples of Class and Object


1........





#include <iostream>
#include <string>
using namespace std;

class Teacher{
public:
   // proprties or attributes

   string name;
   string dept;
   string subject;
   double salary;

   // method

   void changDept(string newDept)
   {
       dept = newDept; //
   }
};

int main()
{

   Teacher t1;
    t1.name="Naman";
    t1.dept="It";
    t1.subject="computer secience";
    t1.salary=25000;

    cout<<t1.name<<endl;


   return 0;
}


but it give error beacuse in c++ or any  lag .propertise is private so we nedd  accesmofidfer like public,private proctected




----------------------------------------------------------------------------------------------------------------------------------


2....




#include<iostream>
#include<string>
using namespace std;

class Car{

   public:

   string brand;
   string model;
   double price;

   void startEngine(){
       cout<<"Engine Started!";
   }

};

int main(){

   Car c1;

   c1.brand="Porsche";
   c1.model="911 GT3 RS";
   c1.price=250000;

   cout<<c1.brand<<endl;
   cout<<c1.model<<endl;
   cout<<c1.price<<endl;

   c1.startEngine();

   return 0;
}




----------------------------------------------------------------------------------------------------------------------------------


3.......



#include<iostream>
#include<string>
using namespace std;

class Student{

   public:

   string name;
   int rollno;
   float marks;

   void displayResult(){
       cout<<"Marks : "<<marks<<endl;
   }

};

int main(){

   Student acc1;

   acc1.name="Naman";
   acc1.rollno=101;
   acc1.marks=88.5;

   cout<<acc1.name<<endl;
   cout<<acc1.rollno<<endl;


   acc1.displayResult();

   return 0;
}

----------------------------------------------------------------------------------------------------------------------------------


4....


#include<iostream>
#include<string>
using namespace std;

class BankAccount{

   public:

   string accountHolder;
   double balance;



   void deposit(double amount){
      balance=balance+amount;

      cout << "Updated Balance: " << balance << endl;
   }

};

int main(){

   BankAccount acc1;

   acc1.accountHolder = "Naman";
   acc1.balance = 5000;


   cout<<acc1.accountHolder<<endl;



   acc1.deposit(400);

   return 0;
}



*/

/*

-------------------------------------------

book mangment using simple classs object ---

#include <iostream>
#include <string>
using namespace std;

class Book
{

public:
    string title;
    string author;
    double price;

    void displayDetails()
    {
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "price : " << price << endl;
    }

    void applydiscount(double discountamount)
    {
        price = price - discountamount;
        cout << "New price : " << price << endl;
    }
};

int main()
{

    Book b1;

    b1.title = "Atomic Habits";
    b1.author = "James Clear";
    b1.price = 500;

    b1.displayDetails();
    b1.applydiscount(60);

        return 0;
}]

*/

/*


--------------------------------------------------------




carbook syastem simple class objcet :


#include <iostream>
#include <string>
using namespace std;

class CabBook
{

public:
    string ridername;
    string pickuplocationl;
    string droplocation;
    double distance;

    void printDetails()
    {
        cout << "Ridername : " << ridername << endl;
        cout << "Pickup location :" << pickuplocationl << endl;
        cout << "Drop location : " << droplocation << endl;
        cout << "Distance : " << distance << endl;
    }

    double calculateFare()
    {
        return 50 + (distance * 12);
    }
};
int main()
{

    CabBook c1;

    c1.ridername = "Naman";
    c1.pickuplocationl = "Station";
    c1.droplocation = "Market";
    c1.distance = 12.5;

    CabBook c2;
    c2.ridername = "Rahul";
    c2.pickuplocationl = "College";
    c2.droplocation = "Airport";
    c2.distance = 25.0;

    c1.printDetails();
    cout << "Total fare : " << c1.calculateFare() << endl;

    return 0;
}


 */

/*

--------------------------------------------------------


StudentReport System :

#include <iostream>
#include <string>
using namespace std;

class StudentReport
{
    public:

    string name;
    int rollno;
    int mark[5];

    void displayInfo()
    {
        cout << "Student name : " << name << endl;
        cout << "Roll no : " << rollno << endl;
        cout << "Marks : ";
        for (int i = 0; i < 5; i++)
        {
            cout << mark[i]<<" ";
        }
        cout<<endl;
    }

    double calculatepercentage()
    {
        double percentage;
        double total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += mark[i];
        }
        return percentage = total / 5.0;
    }
};

int main()
{

    StudentReport s1;

    s1.name = "Naman";
    s1.rollno = 14;
    s1.mark[0] = 85;
    s1.mark[1] = 78;
    s1.mark[2] = 65;
    s1.mark[3] = 54;
    s1.mark[4] = 38;


    s1.displayInfo();
    cout<<"Percentage : "<<s1.calculatepercentage()<<endl;


};



*/

//   ShoppingCart (Mini E-Commerce System ) - Class + Objects + Array + Functions + Conditions + Loop

// #include <iostream>
// #include <string>
// using namespace std;

// class ShoppingCart
// {
// public:
//     string customerName;
//     double intprice[4];
//     int intemcount;

//     void showcart()
//     {
//         cout << "Customer : " << customerName << endl;
//         cout << "Cart Items : " << endl;
//         for (int i = 0; i < intemcount; i++)
//         {
//             cout << "Item " << i + 1 << " : " << intprice[i] << endl;
//         }
//     }
//     double calculateSubtotal()
//     {
//         double subtotal = 0;
//         for (int i = 0; i < intemcount; i++)
//         {
//             subtotal += intprice[i];
//         }
//         return subtotal;
//     }
//     double applyDiscount(double subtotal)
//     {
//         double discount;
//         if (subtotal >= 2000)
//         {
//             return subtotal * 0.10; // Apply 20% discount
//         }
//         else
//         {
//             return 0; // No discount
//         }
//     }

//     void printFinalInvoice()
//     {

//         double subtotal = calculateSubtotal();
//         double discount = applyDiscount(subtotal);
//         double finalTotal = subtotal - discount;

//         cout << "Subtotal: " << subtotal << endl;
//         cout << "Discount: " << discount << endl;
//         cout << "Final Total: " << finalTotal << endl;
//     }
// };

// int main()
// {

//     ShoppingCart cart1;

//     cart1.customerName = "Naman";
//     cart1.intemcount = 4;

//     cart1.intprice[0] = 100;
//     cart1.intprice[1] = 1120;
//     cart1.intprice[2] = 530;
//     cart1.intprice[3] = 800;

//     cart1.showcart();
//     cart1.printFinalInvoice();

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class GameLeaderboard
{
private:
    string playersNames[4];
    int score[4];

public:
    void addPlayer(int index, string name, int playerScore)
    {

        playersNames[index] = name;
        score[index] = playerScore;
    };

    void displayLearderboard(){
        for (int i = 0; i < 4; i++)
        {
            for (int j = i+1; j < 4; j++)
            {
                if (score[i]<score[j])
                {
                    
                    int tempScore = score[i];
                    score[i] = score[j];
                    score[j] = tempScore;

                    
                    string tempName = playersNames[i];
                    playersNames[i] = playersNames[j];
                    playersNames[j] = tempName;
                }
                
            }
            
        }
        
    }

    void printLeaderboar(){
        cout<<"=== OFFICIAL GAME LEADERBOARD ==="<<endl;

        for (int i = 0; i < 4; i++)
        {
            cout<<"Rank "<<i+1<<": "<<playersNames[i]<<" - "<<score[i]<<endl;
        }

        int*ptr = &score[0];
        cout<<"champion score: "<<*ptr<<endl;
    }
};
int main()
{

    GameLeaderboard board;

    board.addPlayer(0, "Rohan", 950);
    board.addPlayer(1, "Naman", 820);
    board.addPlayer(2, "Priya", 640);
    board.addPlayer(3, "Aman", 410);

    board.displayLearderboard();
    board.printLeaderboar();

    return 0;
}