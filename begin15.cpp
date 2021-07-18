// static member functions
// this method can be share by all thr objexts
// it is class method
// it have static keyword
// we can only use stactic data members in it
// we can call it directly scope resolution operator
// we can also use .operator and -> operator


#include<bits/stdc++.h>
using namespace std ;

class lol 
{
private:
   static int p;
   int r = 10;


public: 
    lol()
    {
        p++;
    }
    void func()
    {
        cout << "no of object created " << p << endl;
    }
    static void static_func()
    {
        // cout << r << endl; we can only access the stactic data members
        cout <<"public static " <<p << endl; 

    }
};

int lol :: p= 0;
// accessing the data member by scope resloution operator only possible in static


int main()
{
    lol obj1;
    lol obj2;
    obj1.func();
    lol obj3;
    obj1.func();
    lol obj4;
    obj2.func();
    lol ob5;
    obj3.func();

    obj2.static_func();
    lol::static_func();
    
    return 0;
}