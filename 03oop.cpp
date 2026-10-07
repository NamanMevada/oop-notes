/* 
=====================================================
               ACCESS MODIFIERS IN C++
=====================================================


// Access Modifiers are special words that decide which class data 
// can be directly used in main() and which cannot.



- 3 Main Keywords:


  1. public    -> Accessible from anywhere (inside & outside the class).
  2. private   -> Accessible ONLY inside the same class.
  3. protected -> Accessible inside the class & its derived (child) classes.
                  (Mainly used in Inheritance).

- Note: In C++, by default, all members of a class are PRIVATE.


=====================================================
*/

#include <iostream>
using namespace std;

class BankAccount {
    // 1. Private: Hidden from outside world
private:
    int pin = 1234;

    // 2. Public: Open to everyone
public:
    int balance = 5000;

    // Public method can easily access private members inside the class
    void showPin() {
        cout << "PIN: " << pin << endl;
    }
};

int main() {
    BankAccount account;

    // Allowed: balance is public
    cout << "Balance: " << account.balance << endl;

    // Allowed: showPin() is public
    account.showPin();

    // NOT Allowed: Compilation Error (pin is private)
    // cout << account.pin << endl; 

    return 0;
}