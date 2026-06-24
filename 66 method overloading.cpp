//66. Demonstrate function overloading.

#include<iostream>
#include<string.h>

using namespace std;
class Student{
	public:
		
		
		void getdata(int roll,string name)
		{
			cout<<"Roll No : "<<roll<<endl;
			cout<<"Name : "<<name<<endl;
		}
		
		void getdata(float per) // when we are using method overloading then we are not using as same parameter
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Percentage : "<<per<<endl;
		}
};

int main()
{
	Student s;
	
	s.getdata(1,"bharat");
	s.getdata(90.77);
	return 0;
}
