// overide the base class methode by base class
// it is known as method overriding


// how to access the overwriden method?

#include<bits/stdc++.h>
using namespace std ;
class A 
{
public: 
    void name()
    {
        cout << "my name is base" << endl;
    }
};

class B : public A  // accessing in public style
{
    public: 
       void name()
        {
        cout << "my name is derived" << endl;
        }
};

int main()
{
    B savage;
    savage.name(); // print derived class the function 
    // it is known as method overriding

     savage.A::name(); // method to use overwriden mwthod
    return 0;
}