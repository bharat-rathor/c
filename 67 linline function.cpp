#include<iostream>

using namespace std;


inline void  sum(int num1,int num2)
{
	cout<<"Sum : "<<num1+num2;
}
int main()
{
	int num1,num2;
	cout<<"Enter Number 1 : ";
	cin>>num1;
	cout<<"Enter Number 2 : ";
	cin>>num2;
	
	sum(num1,num2);
}
