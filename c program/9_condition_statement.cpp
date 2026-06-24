#include<stdio.h>

int main()
{
	// condition
	
	// if // if-else // else-if // switch // tarnary 
	
	int num1=5;
	int num2=6;
//	
//	if(num1<num2)
//	{
//		printf("Num1 is less then num2 \n");
//	}else{
//		printf("Num2 is Greater then num1\n");
//	}
	
	
	//	if = independent 
	
	// else = dependent on if
	
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	if(age>35)
	{
		printf("you are Adult\n");
	}
	else if(age>18)
	{
		printf("you are teenager\n");
	}
	else{
		printf("your are child\n");
	}
	 
}
