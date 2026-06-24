#include<stdio.h>

#include<string.h>

int main()
{
	char name[50];
	
	printf("Enter String : ");
	gets(name);
	
	
	int len=strlen(name);
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			continue;
		}
		else{
			
			printf("%c",name[i]);
			
		}
	}
}
