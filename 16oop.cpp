#include <iostream>
#include <string>
using namespace std;

// Compile-time (Function Overloading):
class Player
{
public:
    void attack(int damage)
    {
        cout << "Basic Attack! Damage: " << damage << endl;
    }
    void attack(int damage, string weaponType)
    {
        cout << "Special Attack with " << weaponType << "! Damage: " << damage << endl;
    }
};

// Run-time (Virtual Function & Overriding):

class Gun
{
public:
    virtual void fire()
    {
        cout << "Gun fired basic bullet!\n";
    }
};
class Sniper : public Gun
{
public:
    void fire()
    {
        cout << "Sniper zoom & headshot fired!\n";
    }
};

int main()
{

    Player p1;
    p1.attack(40);

    Sniper mySniper;
    Gun *gunptr;
    gunptr = &mySniper;
    gunptr->fire();

    return 0;
}