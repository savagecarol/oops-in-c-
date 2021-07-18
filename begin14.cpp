// static 
// by using static it is available for function call
// it is always always stroed in heap 
#include<bits/stdc++.h>
using namespace std ;

class lol 
{
private:
   static int p;
public: 
    lol()
    {
        p++;
    }
    void func()
    {
        cout << "no of object created " << p << endl;
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

    // all the function are sharing same static value
    // we can also say it ass class variable
    return 0;
}