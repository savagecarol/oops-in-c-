// constructor overloading

#include<bits/stdc++.h>
using namespace std ;

class A 
{
private:
    string private_var = "private var";
    int age ;
    string name ;
public: 
    A(){
        cout << "default constructor" << endl;
        age = 18;
        name = "Savagecarol";
    }
    A(string iname){
        age = 18;
        name = iname;
    }
    A(int iage){
        age = iage;
        name = "no name";
    }

    string public_var = "public var"; 
    void public_func()  
    {
        cout << "public member function "<< endl ;
        cout << name << " " << age << endl;
    }
};

int main()
{
    A s1;
    s1.public_func();
    A *s2 = new A(15);
    s2->public_func();
    A *s3 = new A("real name");
    s3->public_func();
    return 0;
}