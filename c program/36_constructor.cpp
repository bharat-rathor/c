#include<iostream>
using namespace std;

class sample{
	
	
	public:
		//constructor cretaion 
		sample()
		{
			cout<<"hell i am constructor"<<endl;
		}
		
		void display()
		{
			cout<<"hello i am display method"<<endl;
		}
};

int main()
{
	

	sample s;
//	s.display();
//	
	return 0;	
}
