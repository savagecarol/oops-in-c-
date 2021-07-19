// accessing public method and variable and modifying public so that we can access private and protected
// and not accessing privvated and protected



#include<bits/stdc++.h>
using namespace std ;

class A // class name
{
private:
    string private_var = "private var";
    void private_func()
    {
        cout << " private member funcation " << endl ; // internal function  // member function
    }

public: // access specifier
    string public_var ; // data member
    void public_func()  // this function can access all the member functions and data member doesnt matter private or protected
    {
        private_func(); // private member function
        protected_func(); // protected memeber function

        cout << "public member function "<< endl << public_var << endl; 
        cout << "public member function "<< endl << private_var << endl; 
        cout << "public member function "<< endl << protected_var << endl; 
    }
protected: // access specifier
    string protected_var = "protectedvar"; // data member
    void protected_func()
    {
        cout << " protected member function" << endl; // internal function  // member function
    }
};

int main()
{
    A s; // class object

      s.public_var = "public var"; // giving value to public variable
    // public  --> we can not access private and protected memthod
    s.public_func();
    // some checking
  

    return 0;
}