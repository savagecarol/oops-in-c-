// can we make private constructor ?
 // error because we cannot access it outside the private

// but the answer is yes , we can make constructor private by the help of friend class .........

#include<bits/stdc++.h>
using namespace std ;

class A // class name
{
private:
    A(){} // we can not do constructor private

    string private_var = "private var";

public: // access specifier

    string public_var = "public var"; // data member
    void public_func()  // this function can access all the member functions and data member doesnt matter private or protected
    {
        cout << "public member function "<< endl << public_var << endl; 
        cout << "public member function "<< endl << private_var << endl; 
    }
};

int main()
{
    // A s; // class object //
     // A *s = new A(); constructor will not called give error 
    return 0;
}