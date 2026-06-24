#include<iostream>
using namespace std;
int main()
{
	int num;
	int digit;
	cout<<"Enter a Number:";
	cin>>num;
	int rev;
	while(num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
	}
	cout<<"The Reverce Number iS : "<<rev;
}
