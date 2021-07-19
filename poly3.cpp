// abstract classe --> it is a claass that contain one or more pure virtual class

#include<bits/stdc++.h>
using namespace std ;
class A  // it is abstract class we can not create object of it
{
public:
   virtual void age() = 0;
};

// void A :: age() // we can define it outside the class
//     {
//         cout << "hi i am a student";
//     }


class B : public A 
{
public:
    void age()
    {
        cout << "hi i am a student";
    }
};


int main()
{
    B b;
    b.age();  
    return 0;
}