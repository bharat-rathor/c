#include<stdio.h>

int main()
{
	int row,col;
	printf("Enter Row : ");
	scanf("%d",&row);
	printf("Enter Col : ");
	scanf("%d",&col);
	
	
	int trance[10][10];
	int arr[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("Enter Number %d %d : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			trance[j][i]=arr[i][j];
		}
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d",trance[i][j]);
		}
		printf("\n");
	}
}
