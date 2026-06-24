#include<stdio.h>

// function are declare as data type like int , float , void 

// void function use karte hai na tab return type nahi use karte hai 
void add(); // decalration 

int main()
{
	add();
	return 0 ;
}

// defination  

void add()
{
	int num1,num2;
	printf("Enter Number 1 : ");
	scanf("%d",&num1);
	printf("Enter Number 2 : ");
	scanf("%d",&num2);
	
	printf("sum is : %d",num1+num2);
}
