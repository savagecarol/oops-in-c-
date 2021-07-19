// inheritance basic
// method to inherit the feautures of one class to another class


// accesss-----> technique 

// rules for public 
     //public    ------> public
     //protected ------> protected

// rules for private
     //public    ------> private
     //protected ------> private

// rules for protected
     //public    ------> protected
     //protected ------> protected



// second topic accessing in public style

#include<bits/stdc++.h>
using namespace std ;

// class A is base class
class A 
{
private:
   static int p;  
public: 
    int age ;
    string name ;
    void setName(string iname){name = iname;}
    void setAge(int iage){age = iage;}
};


// class B is sub class
class B : public A  // accessing in public style
{
    public:
        int id;
        void setId(int iid){id = iid;}
        void introduce()
        {
            cout  << name << " " << age << " " << id << endl;
        }
};

int main()
{
    B savage;
    savage.setName("savagecarol"); //  function of base class
    savage.setAge(18); // function of base class
    savage.setId(2); // function of same class
    savage.introduce();    
    return 0;
}