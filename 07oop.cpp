//              Example



// #include <iostream>
// using namespace std;

// class CabRide
// {
// private:
//     double distanceInKm = 0.0;
//     double totalFare = 0.0;
//     bool isRideCompleted = false;

// public:
//     void startRide(double km)
//     {
//         if (km > 0)
//         {
//             distanceInKm = km;
//         }
//         else
//         {
//             cout << "Invalid Distance!" << endl;
//         }
//     };

//     void completeRide()
//     {
//         totalFare = 50 + (distanceInKm * 12);
//         isRideCompleted = true;
//         cout << "Ride Completed successfully" << endl;
//     }
//     double getfare()
//     {
//         if (isRideCompleted)
//         {
//             return totalFare;
//         }
//         else
//         {
//             cout << "Ride is still going!" << endl;
//             return 0.0;
//         }
//     }
//     double getDistance()
//     {
//         return distanceInKm;
//     }
// };

// int main()
// {

//     CabRide ride1;

//     ride1.startRide(10);
//     ride1.getfare();
//     ride1.completeRide();
//     cout << "thank you totalfare = " << ride1.getfare() << endl;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    string accountNumber;
    double balance;
    int transactionCount = 0;
    double transactionHistory[10];
    

public:
    void setAccountDetails(string holder, string number, double startbalance)
    {
        accountHolder = holder;
        accountNumber = number;

        if (startbalance < 0)
        {
            balance = 0;
        }
        else
        {
            balance = startbalance;
        }
    }


    double getBalance(){
        return balance;
    }
    string getAccountHolder(){
        return accountHolder;
    }
    double getTransactionHistory(int index){
        if(index >= 0 && index < 10){
            return transactionHistory[index];
        }
        else{
            cout << "Invalid transaction index!" << endl;
            return -1; // Indicate an error
        }
    }

    void adddeposite(double amount){
        if (amount<0)
        {

            cout<<"Invalid amount";
        }
        else{
            balance+=amount;
            transactionHistory[transactionCount]=amount;
            transactionCount++;
        }
        
    }
    void withdraw(double amount){
        if (amount<0)
        {
            cout<<"Invalid amount";
        }
        else if(amount>balance){
            cout<<"Insufficient balance";
        }
        else{
            balance-=amount;
            transactionHistory[transactionCount]=-amount;
            transactionCount++;
        }
    }

    void printstatement(){
        
        for (int i = 0; i < transactionCount; i++)
        {
             // print deposits
            if (transactionHistory[i] > 0){
                cout<<"Transaction "<<i+1<<": Deposited "<<transactionHistory[i]<<endl;
            }
           //print withdrawals
            else if (transactionHistory[i] < 0){
                cout<<"Transaction "<<i+1<<": Withdrawn "<<-transactionHistory[i]<<endl;
            }
        }
        
    }

    



};
int main()
{
  
    BankAccount account1;

    account1.setAccountDetails("Naman", "AC001", 1000);
    account1.adddeposite(500);
    account1.withdraw(200);
    account1.printstatement();
    return 0;
}