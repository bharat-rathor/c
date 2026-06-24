#include<stdio.h>
int main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=i;j<=5;j++)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=4;i>=0;i--)
	{
		for(int j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(int j=0;j<i;j++)
		{
			printf(" *");
		}
		printf("\n");

	}
}
