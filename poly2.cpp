// virtual functions--> they used virtual keyword
// and they are in base clas
// there definiton is in drived class


//  hierarichal nature of virtual function


// no maater how many times virtual function inherited it is always virtual
#include<bits/stdc++.h>
using namespace std ;
class A 
{
private: int age;
public:
   virtual void name() // virtual function have inherited
    {
        cout << "name in a class" << endl;
    }
};

class B : public A 
{
public:
    void name()
    {
        cout << "name in b class" << endl;
    }
};

class C : public B
{
    public:
    void name()
    {
        cout << "name in c class" << endl;
    }

};


void whoIsThis(A &a)
{
    a.name();
}

int main()
{
    A a;
    B b;
    C c;

    a.name(); // we can make call virtual func by object
    b.name(); 
    c.name();

    whoIsThis(a);
    whoIsThis(b);
    whoIsThis(c);
   
    return 0;
}