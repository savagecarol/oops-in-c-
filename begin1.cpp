#include<bits/stdc++.h>
using namespace std ;

class Person // class name 
{
public: // access specifier 
    int age ;
    string name;
    void getdat(int age , string name)
    {
        this->name = name;
        this->age = age;

    }
};

int main()
{
    Person person1; // class object
    Person person2; // physcial entity
    person1.getdat(18 , "savage");
    person2.getdat(16 , "piyus");

    return 0;
}