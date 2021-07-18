// scope resolution operator
// internal function
// external function

#include<bits/stdc++.h>
using namespace std ;

class A // class name
{
public: // access specifier
    string name ; // data member
    void public_func_internal()  // internal function
    {
        cout << "hi my name is "<< endl << name << endl; 
    }
    void public_func_external(); // external function define
};

// A :: name = "changing the name";  // this line will give error 
// reason --> we can not initialize the data member outside the class we can use it only when it is static
// string A:: external_var = "D";  // giving error because not static


void A :: public_func_external() // external function
{
    cout << "hi my name is "<< endl << name << endl; // work fine with both 
    cout << "hi my name is "<< endl << A::name << endl;  // work fine with both
}

int main()
{
    // technique 1 --> it is stored in stack
    A s; // class object
    s.name = "inernal"; // we use . operator
    s.public_func_internal();
    s.name = "external";
    s.public_func_external();
    return 0;
}