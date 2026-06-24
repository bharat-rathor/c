#include<iostream>
#include<string.h>
using namespace std;


void display()
{
	string name;
	int roll_no;
	
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Roll No : ";
	cin>>roll_no;
	
	cout<<"Name : "<<name<<endl;
	cout<<"Roll No : "<<roll_no<<endl;
}
int main()
{
	display();
	return 0 ;
}
