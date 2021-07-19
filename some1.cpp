// this pointer

// this pointer is an implicit parameter to all function
// friend function do not have this pointer 

#include<bits/stdc++.h>
using namespace std ;
class A 
{
private: int age;
public:
    void setAge(int age)
    {
        this->age = age; // helping to store the value in class variable
    }
    void setAge1(int iage)
    {
        age = iage; // in this this operator is working internally by c++ 
    }
    void print()
    {
        cout <<age;
    }
};



int main()
{
    A savage;
    savage.setAge(15);
    savage.print();
    savage.setAge(18);
    savage.print();
    return 0;
}