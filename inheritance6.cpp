// constructor concept in c++

#include<bits/stdc++.h>
using namespace std ;

class A 
{
public: 
    A()
    {
        cout << "base const" << endl;
    }
    ~A()
    {
        cout << "base dest" << endl;
    }
};

class B : public A  // we can use any other access specifier also 
{
    public: 
    B()
    {
        cout << "derived const" << endl;
    }
    ~B()
    {
        cout << "derives dest" << endl;
    }
        
};

int main()
{
    B savage;
    return 0;
}