// Bank Account Simulation //

#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    virtual void calculateInterest() = 0;

protected:
    double balance;

public:
    static int totalAccounts;

    Account()
    {
        totalAccounts++;
    }
};

class savingsAccount : public Account
{
public:
    savingsAccount(double balance)
    {
        this->balance = balance;
    }

    void calculateInterest()
    {
        double interest = balance * 0.04;
        cout << "Savings Account Interest (4%): Rs. " << interest << "\n";
    }
};

class CurrentAccount : public Account
{
public:
    CurrentAccount(double balance)
    {
        this->balance = balance;
    }
    void calculateInterest()
    {
        cout << "Current Account has 0% Interest. Total Balance: Rs. " << balance << "\n";
    }
};

int Account::totalAccounts = 0;

int main()
{
    Account *acc;

    savingsAccount s1(50000);
    acc = &s1;
    acc->calculateInterest();

    CurrentAccount c1(100000);
    acc = &c1;
    acc->calculateInterest();

    cout << "Total Bank Accounts Created: " << Account::totalAccounts << "\n";

    return 0;
}