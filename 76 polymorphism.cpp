//76 Demonstrate polymorphism with virtual functions.

#include<iostream>

using namespace std;

class A{
	
		virtual void sum()=0;  // pure virtual function
};

class B : public A { 

	public: 
	
		void sum()
		{
			cout<<"Sum is : "<<10+20;
		}
};

class c : public A {
	public: 
		void sum()
		{
			cout<<"sum is : "<<20+30;
		}
};

int main()
{
	
	c c1;
	c1.sum();
	
	B b1;
	b1.sum();
	return 0 ;
}
