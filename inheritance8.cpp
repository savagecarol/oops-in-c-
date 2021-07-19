// multiple inheritance

// we have two base class andd one sub class

// problems in it
// we have same function name in two base class

#include<bits/stdc++.h>
using namespace std ;

class Father  // base class 1
{
protected: 
    string father;
public: 
    void setfather(string iname){
        father = iname;
        cout <<"father name" << father << endl;
    }
    void feature()   // function 1 with same name
    {
        cout << "father height is 6" << endl;
    } 
};

class Mother  // base class 2
{
protected: 
    string mother;
public: 
    void setmother(string iname){
        mother = iname;
        cout <<"mother name "<< mother << endl;
    }
    void feature()  // function 2 with same name
    {
        cout << "mother height is 5" << endl;
    } 

};

class Child : public Father, public Mother
{
protected: 
    string child;
public: 
    void setchild(string iname){
        child = iname;
        cout << "child name " << child << endl;
    }
    void feature()  // function 2 with same name
    {
        Father:: feature(); //by this we can do it
        Mother:: feature();
        cout << "father height is 5" << endl;
    } 


};



int main()
{
    Child sav;
    sav.setfather("savage");
    sav.setmother("carol");
    sav.setchild("Savagecarol");
    sav.feature();
   //sav.feature(); // it will give error because it did not know which should print

    return 0;
}