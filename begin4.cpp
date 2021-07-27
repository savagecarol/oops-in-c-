// creating an object different techniques

#include<bits/stdc++.h>
using namespace std ;

class A // class name
{
public: // access specifier
    string name ; // data member
    void public_func()  
    {
        cout << "hi my name is "<< endl << name << endl; 
    }
};

int main()
{
    // technique 1 --> it is stored in stack
    A s; // class object
    s.name = "lol"; // we use . operator
    s.public_func();

    // techniques 2 --> by using new keyword it stores in heap and dynamically allocated
    // we use pointer because it returns the memory address
    A *savagecarol = new A();
    cout << savagecarol << " ";// address
    savagecarol->name = "savagecarol"; // we have to use the arrow operator
    savagecarol->public_func();   
    return 0;
}