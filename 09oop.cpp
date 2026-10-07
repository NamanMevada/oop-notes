//   Constructor example //

#include <iostream>
#include <string>
using namespace std;

class ATMCard
{
private:
    string cardNumber;
    int pin;
    double balance;

public:
    ATMCard()
    {
        cardNumber = "0000";
        pin = 1111;
        balance = 0.0;
    }

    ATMCard(string cNum, int p, double bal)
    {
        cardNumber = cNum;
        if (p >= 1000 && p <= 9999)
        {
            pin = p;
        }
        else
        {
            pin = 1111;
            cout << "Invalid PIN! Set to 1111" << endl;
        }
        if (bal >= 0)
        {
            balance = bal;
        }
        else
        {
            balance = 0.0;
        }
        cout << "Card Generated for Number : " << cardNumber << endl;
    }

    void withdraw(int enteredpin, double amount)
    {
        if (enteredpin == pin)
        {
            if (amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal Successful! Remaining Balance: " << balance << endl;
            }
            else
            {
                cout << "Insufficient Balance!" << endl;
            }
        }
        else
        {
            cout << "Wrong PIN! Access Denied." << endl;
        }
    }
    void displaycard()
    {
        cout << "CardNumber : " << cardNumber << endl;
        cout << "Current balance :" << balance << endl;
    }
};

int main()
{

    ATMCard card1;
    ATMCard card2("4532-xxxx", 4589, 10000.0);
    ATMCard card3("9876-xxxx", 123, 5000.0);

    card2.withdraw(1234, 500.0);
    card2.withdraw(4589, 2000.0);
    card2.displaycard();

    return 0;
}