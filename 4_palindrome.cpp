#include<stdio.h>
#include<string.h>


int main()
{
	char name[50];
	printf("Enter String : ");
	gets(name);
	
	int len=strlen(name);
	int palindrome=1;
	
	for(int i=0;i<len/2;i++)
	{
		if(name[i]!=name[len-1-i])
		{
			palindrome=0;
			break;
		}
	}
	
	if(palindrome==1)
	{
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
}
