#include<iostream>

using namespace std;

void cube()
{
	int n;
	cout<<"enter number : ";
	cin>>n;
	
	int cube;
	cube=n*n*n;
	cout<<"the cube is : "<<cube;
}

int main()
{
//	cout<<"The Cube Is : "<<cube();
	cube();
	return 0;
}
