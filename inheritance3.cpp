// accessing in protected style

// rules for protected
     //public    ------> protected
     //protected ------> protected

#include<bits/stdc++.h>
using namespace std ;

class A 
{
protected: // defining name in protected
    string name;
public: 
    void setName(string iname){name = iname;}
};

class B : protected A  // accessing in protected style
{
    public: 
        void introduce()
        {
            name = "savagecarol";
            cout << "we can access this protected variable here" << endl;
            cout  << name <<endl; // accessing the protected data memeber
        }
};

int main()
{
    B savage;
   //  savage.setName("savagecarol"); we cannot use it because it is protected in derived class
   // cout << savage.name; // we cannot access it because it is protected

    savage.introduce();
    return 0;
}