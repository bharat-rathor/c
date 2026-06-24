#include<stdio.h>
#include<string.h>

int main()
{
	char name[50];
	char name1[50];
	
	printf("enter name : ");
	gets(name);
	
	printf("enter name 2 : ");
	gets(name1);
	
	int len=strlen(name);
	int len1=strlen(name1);
	int cmp=1;
	for(int i=0;name[i]!='\0'||name1[i]!='\0';i++)
	{
		if(name[i]!=name1[i])
		{
			cmp=0;
			break;
		}
	}
	if(cmp==1)
	{
		printf("The Same Strin\n");
	}
	else{
		printf("Not Same String \n");
	}
}
