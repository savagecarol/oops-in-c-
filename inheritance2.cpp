// protected member accessing

//if there is data member , member function in protected access specifier then we cannot access it we can only 
//access it by the help of sub classes that are inherited.


// we can not access private member in sub subclass
// but we can access protected member in sub class


#include<bits/stdc++.h>
using namespace std ;

// class A is base class
class A 
{
private:
   static int p;  
protected: // defining name in protected
    string name;
public: 
    int age ;
    void setName(string iname){name = iname;}
};


// class B is sub class
class B : public A  // accessing in public style
{
    public: 
        void introduce()
        {
            cout  << name <<endl; // accessing the protected data memeber
        }
};

int main()
{
    B savage;
    savage.setName("savagecarol");
    savage.introduce();
    return 0;
}