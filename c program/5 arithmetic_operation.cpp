#include<stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter Number 1 : ");
	scanf("%f",&num1);
	printf("Enter Number 2 : ");
	scanf("%f",&num2);
	
	//Arithmetic operation 
	
	printf("sum : %f\n",num1+num2);
	printf("minus : %f\n",num1-num2);
	printf("mul : %f\n",num1*num2);
	printf("div : %f\n",num1/num2);
	printf("Mod : %d",num1%num2);
}
