//75. Demonstrate inheritance (single, multiple, multilevel).

#include<iostream>

using namespace std;


class a{
	public:
		void sum()
		{
				cout<<"Addition : 10 + 20 =  "<<10+20<<endl;

		}
};
class b : public a{
	
	public:
		
		void sub()
		{
			cout<<"Subtraction : 20-10 = "<<20-10<<endl;
		}
};

class c : public b{
	
	public: 
	
		void mul()
		{
			cout<<"Subtraction : 20-10 = "<<20*10<<endl;
		}
};
int main()
{
	
	c c1;
	c1.mul();
	c1.sub();
	c1.sum();
	return 0;
}
