#include<stdio.h>

int main()
{
	//data type : diffrent type of data are store 
	//int = int num = 4 byte ex 1,2,3,4,56
	//char = 1 byte  'a','c','g' only store single character 
	//float = 4 byte  3.14,5.58,49 real number are store
	
	//variable : we are store our data in some variable 
	int a=10;
	char name='a';
	float f=3.14;
	
	//printf are using to informative text 
	// %d and %c , %f this is formate specifer 
	printf("Integer Number is : %d\n",a);
	printf("Character is : %c\n",name);
	printf("Float Number : %.2f",f);
}
