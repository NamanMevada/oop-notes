/*
=====================================================
               ENCAPSULATION IN C++
=====================================================

1. DEFINITION:
   - Wrapping up data (variables) and methods (functions) 
     together into a single unit (called a Class).
   - Just like a medical capsule contains different medicines inside one cover.

2. HOW IS IT ACHIEVED?
   - Declare variables as PRIVATE (Data Hiding).
   - Provide PUBLIC Getters & Setters to access/modify them safely.

3. KEY BENEFITS:
   - Security: Prevents unauthorized direct access from outside.
   - Control: Validation logic ensures data integrity.
   - Flexibility: Internal logic can change without breaking external code.
=====================================================
*/

#include <iostream>
using namespace std;

// This class is the "Capsule"
class ATMCard {
private:
    // Hidden Data (Inside the capsule)
    int pin = 1234;

public:
    // Controlled Door (Access point)
    bool verifyPin(int enteredPin) {
        return enteredPin == pin;
    }
};

int main() {
    ATMCard myCard;

    // Direct access blocked (Encapsulation protects it)
    // cout << myCard.pin; // ERROR!

    // Controlled access allowed
    if (myCard.verifyPin(1234)) {
        cout << "Access Granted!" << endl;
    }
    return 0;
}