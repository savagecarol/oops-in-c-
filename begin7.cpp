// constructor
// having same name as class 
// and no return type
// called when objet is creatted // automatically


// can we make private constructor ?

#include<bits/stdc++.h>
using namespace std ;

class A // class name
{
private:
    string private_var = "private var";

public: // access specifier
    A()
    {
        private_var = "private var constructor";
        cout << public_var << endl;
        public_var = "constructor calling" ; // we can initialize value in constructors
        cout << public_var << endl;
    }
    string public_var = "public var"; // data member
    void public_func()  // this function can access all the member functions and data member doesnt matter private or protected
    {
        cout << "public member function "<< endl << public_var << endl; 
        cout << "public member function "<< endl << private_var << endl; 
    }
};

int main()
{
    A s; // class object
    s.public_func(); // we are working on private member functions by help of this public function

    return 0;
}