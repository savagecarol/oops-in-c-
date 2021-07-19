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
void whoisthisfirst(A a)
{
    a.name();
}

void whoisthissecond(B a)
{
    a.name();
}


int main()
{
    B sav;
    sav.name(); // class function
    sav.A::name(); // base class function
    whoisthisfirst(sav); // base class  name function will run
    whoisthissecond(sav); // derived class name function will run
    return 0;
}