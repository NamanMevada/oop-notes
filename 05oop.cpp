// #include <iostream>
// #include <string>
// using namespace std;

// class Bike
// {

// private:
//     int speed = 0;

// public:
//     string brand;

//     void accelerate(int increase)
//     {
//         speed += increase;
//     }

//     int getSpeed()
//     {
//         return speed;
//     }

//     void applyBrake(int decrease)
//     {
//         speed -= decrease;
//         if (speed < 0)
//         {

//             speed = 0;
//         }
//     }
// };
// int main()
// {

//     Bike b1;
//     b1.brand = "Yamaha";

//     b1.accelerate(40);
//     cout << "Current Speed: " << b1.getSpeed() << endl;
//     b1.applyBrake(50);
//     cout << "Speed after applying brake: " << b1.getSpeed() << endl;
//     return 0;
// }

//----------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

class mobilewallet
{

private:
    int balance = 0;

public:
    void addDeposite(int amount)
    {
        if ((amount <= 0))
        {
            cout << "plese add positive amount" << endl;
        }
        else
        {
            balance += amount;
        }
    }

    void withrawAmount(int amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }
    int getBalance() {
    return balance;
}
};

int main()
{

    mobilewallet user1;

    user1.addDeposite(500);
    user1.withrawAmount(700);
    user1.withrawAmount(200);
    cout << "Final Balance: " << user1.getBalance() << endl;

    return 0;
}
