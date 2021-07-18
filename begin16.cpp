// friend function
//this function is not member function thena also it can access all the property of the clas
// no object required
// can access the class variable without being part of it 

#include<bits/stdc++.h>
using namespace std ;

class lol 
{
private:
   static int p;
   int age ;
   string name ;
public: 
    lol()
    {
        name = "savage carol";
        age = 18;
    }

    void info()
    {
        cout << "member function" << endl; 
        cout << name << " " << age << endl;
    }
    friend void display(lol p); // friend function
};

void display(lol p)
{
    cout << "friend function " << endl;
    cout << p.name << " " << p.age;
    p.name = "savage"; // we cannot change the value in friend function
}

int main()
{    
    lol s;
    s.info();
    display(s); // friend function
    s.info();
    return 0;
}