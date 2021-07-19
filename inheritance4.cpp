// accessing in private style


// rules for private
     //public    ------> private
     //protected ------> private

#include<bits/stdc++.h>
using namespace std ;

class A 
{
protected: // defining name in protected
    string name;
public: 
    void setName(string iname){name = iname;}
};

class B : private A  // accessing in private style
{
    public: 
        void introduce()
        {
            name = "savage2"; // it is acting as private variable for the subclass
            cout << "we can access this private variable here" << endl;
            cout  << name <<endl; // accessing the protected data memeber
        }
        void setNameinBaseClass(string iname)
        {
            cout << "accessing private member function in sub class" << endl;
            setName(iname);
            cout << name<< endl;
        }

};

int main()
{
    B savage;
   //  savage.setName("savagecarol"); we cannot use it because it is protected in derived class
   // cout << savage.name; // we cannot access it because it is protected

    savage.setNameinBaseClass("savage1");
    savage.introduce();
    return 0;
}