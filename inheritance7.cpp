// multiple inheritance

// we have two base class andd one sub class

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
};



int main()
{
    Child sav;
    sav.setfather("savage");
    sav.setmother("carol");
    sav.setchild("Savagecarol");
    return 0;
}