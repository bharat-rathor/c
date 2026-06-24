#include<stdio.h>


int squ(int n1);
int main()
{
	int n1;
	printf("Enter Number : ");
	scanf("%d",&n1);
	
	printf("Square is : %d",squ(n1));
	return 0;
}

int squ(int n1)
{
	return n1*n1;
}
