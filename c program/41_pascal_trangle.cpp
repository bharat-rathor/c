#include<stdio.h>

int main()
{
	int n,conf;
	printf("Enter how many row do you print : ");
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++)
	{
		conf=1;
		for(int j=5;j>i;j--)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			printf(" %d",conf);
			conf=conf*(i-j)/(j+1);	
		}
		printf("\n");
		
	}
}
