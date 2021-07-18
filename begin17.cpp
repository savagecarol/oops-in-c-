// private constructor by the help of friend function class

// private constructor

#include <bits/stdc++.h>
using namespace std;

// class A
class A{
private:
	A(){
	cout << "constructor of A" << endl;
	}
	friend class B;
};

// class B, friend of class A
class B{
public:
	B(){
		A a1;
		cout << "constructor of B"  << endl;
	}
};


int main(){
	B b1;
	return 0;
}
