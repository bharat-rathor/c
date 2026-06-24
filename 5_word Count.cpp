#include<stdio.h>
#include<string.h>

int main()
{
	
	char name[50];
	
	printf("Enter Name : ");
	gets(name);
	
	int count=0;
	
	for(int i=0;name[i]!='\0';i++)
	{
		count++;
	}
	
	printf("The Word : %d",count);
	
}
