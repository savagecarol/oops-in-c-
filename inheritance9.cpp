// calling and passing values of 
// base class construcctor to derived class


#include<bits/stdc++.h>
using namespace std ;

// class A is base class
class A 
{
protected: // defining name in protected
    string name;
public:
    A(string iname)
    {
        name = iname;
        cout << "in base class " << name << endl;
    }

};


// class B is sub class
class B : public A  // accessing in public style
{
    public: 
        B(string x) : A(x)
        {
            cout << "in derived class " << x << endl;  
        }

};

int main()
{
    B savage("savagecarol");
    return 0;
}