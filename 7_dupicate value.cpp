#include<stdio.h>
#include<string.h>

int main()
{
	
	char name[50];
	printf("Enter Name : ");
	
	gets(name);
	
	char name1[50];
	int arr;
	
	int len=strlen(name);
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(name[i]==name[j] && name[i]!=' '&&name[i]!='0' )
			{
				printf("%c",name[i]); 	
				name[j]='0';
				break;
			}

		}
	}
	
	for(int i=0;i<arr;i++)
	{
		printf("%c",name1[i]);
	}
}
