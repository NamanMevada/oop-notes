

/* ---- Constructor ---*/



/*  

--->  a special method or fuction called automatically when Objcet created.

// used to set starting values [initilization]

- same name as Class name   
- no Return type values
- Always decalre in public
- only call once when object created
- Memory allocation happen when constructor call



# 3 type :--

       1. Default
       2. Parameterized
       3. Copy

# Constructor Overloading  ->

   defining  multiple constrctor   but parametres different in one class

*/



#include<iostream>
#include<string>
using namespace std;

class bankaccount{
    private:

     string  holdername;
     double balance;
    
    public:
       
      bankaccount(string name,double initialbalance){
        holdername=name;
        balance=initialbalance;
        cout<<"Account Created for "<<holdername<<endl;
      }

     void displayedetials(){
        cout<<"HolderName : "<<holdername<<endl;
        cout<<"Balance : "<<balance<<endl;
     }
};


int main(){


    bankaccount acc1("Naman",2000.0);
    acc1.displayedetials();
    // bankaccount acc1("Naman",2000.0);   it give error
    bankaccount acc2("Virat",4000.0);
    acc2.displayedetials();

    return 0;
}

