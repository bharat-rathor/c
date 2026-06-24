#include<stdio.h>

int main()
{
	int age=25;
	int *ptr=&age;
	
	
	printf("The address of age : %d\n",&age);
	
	printf("The increment value : %d\n",ptr);
	ptr++;
	printf("The increment value : %d\n",ptr);
	ptr--;
	printf("'The increment value : %d\n",ptr);
	
}
