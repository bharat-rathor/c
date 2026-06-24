#include<iostream>
#include<string>
using namespace std;

class student{
	
	public:
		
		student(string name)
		{
			cout<<"hello "+name+" welcome to tops "<<endl;
		}
};

int main()
{
	
	student s("bharat");
}
