
#include<stdio.h>

int main()
{
	// * = value 
	// &(emperson) = address 
	// pointer 
	
	int age=25;
	
	// pointer variable 
	
	int *ptr=&age;
	int _age=*ptr;
	
	
	//Address    
	printf("Address of age : %d\n",&age);
	printf("value of ptr : %d\n",*ptr);
	printf("_age value : %d",_age);
	
}
