#include<iostream>
using namespace std;

class a{ 
	public:
		void sum()
		{
			cout<<"sum : "<<10+20;
		}
};

class b { 
	public:
		void sub()
		{
			cout<<"sub : "<<20-10;
		}
};

class c : public b , public a{
	public:
		void mul()
		{
			cout<<"multiplication : "<<10*20;
		}
};

int main()
{
	
	c c1;
	c1.mul();
	c1.sum();
	c1.sub();
	return 0;
	
}
