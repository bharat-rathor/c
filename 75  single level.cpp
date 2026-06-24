#include<iostream>
using namespace std;

class a { 

	public:
		void sum()
		{
			cout<<"sum : "<<10+20<<endl;
		}
};

class b : public a { 

	public: 
	
		void sub()
		{
			cout<<"sub : "<<20-10<<endl;
		}
};

int main()
{
	b b1;
	b1.sub();
	b1.sum();
	return 0;
}
