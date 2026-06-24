
#include<iostream>

using namespace std;

class student{
	string name;
	public:
		
		
		student(string name)
		{
			this->name=name;
			cout<<"hello  "<<name;
			cout<<"\nwelcome to tops technologies \n";
		}
		
		void display()
		{
			cout<<"bye "<<name;
		}
};

int main()
{
	
	student a("a");
	a.display();
	return 0;
}
