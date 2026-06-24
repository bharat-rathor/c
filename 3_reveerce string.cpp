#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	
	printf("Enter Name : ");
	gets(name);
	
	
	
	
	for(int i=strlen(name);name[i]>=0;i--)
	{
		printf("%c",name[i]);
	}
}
