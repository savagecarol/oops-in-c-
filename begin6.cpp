// private
// we use private to only to show the important function


#include<bits/stdc++.h>
using namespace std ;

class A // class name
{
private:
    string private_var = "private var";
    void private_func()
    {
        cout << "private member function " << endl ; // internal function  // member function
    }

public: // access specifier
    string public_var = "public var"; // data member
    void public_func()  // this function can access all the member functions and data member doesnt matter private or protected
    {
        private_func(); // private member function
        private_var = "changing value of private var";
        cout << "public member function "<< endl << private_var << endl; 
    }
protected: // access specifier
    string protected_var = "protected var"; // data member
    void protected_func()
    {
        cout << " protected member function" << endl; // internal function  // member function
    }
};

int main()
{
    A s; // class object
    
    // s.private_var = "F"; we cannot access this
    // we can access this variable by the help of public
    s.public_func(); // we are working on private member functions by help of this public function

    return 0;
}