#include<stdio.h>

void add(int n1,int n2);

int main()
{
	int a,b;
	printf("enter numer 1 : ");
	scanf("%d",&a);	
	printf("enter numer 2 : ");
	scanf("%d",&b);
	
	add(a,b);
}

void add(int n1,int n2)
{
	printf("Sum is : %d",n1+n2);
}
