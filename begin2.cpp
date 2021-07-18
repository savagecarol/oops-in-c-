#include<bits/stdc++.h>
using namespace std ;

class A // class name
{
private:
    string private_var = " private data member ";
    void private_func()
    {
        cout << " private member funcation "; // internal function  // member function
    }

public: // access specifier
    string public_var = "public data member"; // data member
    void public_func()
    {
        cout << " public member function"; // internal function  // member function
    }

protected: // access specifier
    string protected_var = " public data member"; // data member
    void protected_func()
    {
        cout << " public member function"; // internal function  // member function
    }
};

int main()
{
    A s; // class object
    
    // public  --> we can not access private and protected memthod
    s.public_func();
    cout << s.public_var;
    
    return 0;
}