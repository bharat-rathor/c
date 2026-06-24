#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter number :";
	cin>>a;
	int fact=1;
	
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	
	cout<<"the factorial number : "<<fact;
	
}
