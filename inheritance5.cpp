// access declartion manually



#include<bits/stdc++.h>
using namespace std ;

class A 
{
protected: 
    string name;
public: 
    void setName(string iname){
        name = iname;
        cout << "accesing it by changing it manually " << endl;
        cout << name<< endl;
    }
};

class B : private A  
{
    public: 
        using A :: name; // making this public   -------> because of inheritance they were private
        using A :: setName; // making this public   -------> because of inheritance they were private

        // if we dont use using keyowrd it will give error no error will come

        void introduce()
        {
            name = "savage3"; // it is acting as private variable for the subclass
            cout << "we can access this private variable here" << endl;
            cout  << name <<endl; // accessing the protected data memeber
        }
};

int main()
{
    B savage;
    savage.setName("savage1");
    savage.introduce();
    return 0;
}