//polymorphism

// same name of functions but different work

// virtual functions--> they used virtual keyword
// and they are in base clas
// there definiton is in drived class
// 

#include<bits/stdc++.h>
using namespace std ;
class A 
{
private: int age;
public:
   void name()
    {
        cout << "name in base class" << endl;
    }
};


class B : public A 
{
public:
    void name()
    {
        cout << "name in derived class" << endl;
    }
};


int main()
{
    B sav;
    sav.name(); // class function
    sav.A::name(); // base class function
   
    return 0;
}