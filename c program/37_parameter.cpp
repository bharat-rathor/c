#include<iostream>
using namespace std;

class sample{
	
	
	public:
		//constructor cretaion 
		sample(int num,int num2)
		{
			cout<<"the sum is : "<<num+num2<<endl;
			cout<<"hell i am constructor"<<endl;
		}
		
		void display()
		{
			cout<<"hello i am display method"<<endl;
		}
};

int main()
{
	

	sample s(10,20);
//	s.display();
//	
	return 0;	
}
