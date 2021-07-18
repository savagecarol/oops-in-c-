#include<bits/stdc++.h>
using namespace std ;

class A // class name
{
public: // access specifier 
    void r()
    {
        cout << "Dfs"; // internal function 
    }
};

int main()
{
    A s; // class object
    s.r(); // method calling by object
    return 0;
}