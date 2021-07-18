// desctructor
// we use ~ keyword
// it deallocate all the memory
#include<bits/stdc++.h>
using namespace std ;

class A 
{
private:
    string private_var = "private var";

    int age ;
    string name ;

public: 
    // default constructor
    A(){
        cout << "default constructor " << endl;
        age = 18;
        name = "Savagecarol";
    }
    ~A(){
        cout << "destructor" << endl;
    }
    // parameterized construcor

    string public_var = "public var"; 
    void public_func()  
    {
        cout << "public member function "<< endl ;
        cout << name << " " << age << endl;
    }
};

int main()
{
    A s1;
    s1.public_func();
    // at the end here destructor is called aurtomatically 
    
    
    A *s2 = new A();
    s2->public_func();
    delete s2;
// maually callling destructor
// two time delete s2;

}