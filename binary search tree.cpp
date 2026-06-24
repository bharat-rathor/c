#include<stdio.h>

int main()
{
	int value,n,index;
	int arr[100];
	
	for(int i=0;i<100;i++)
	{
		arr[i]=-1;
	}
	
	printf("enter how many number do you want to add : ");
	scanf("%d",&n);
	
		for(int i=0;i<n;i++)
	{
		printf("Enter Value : ");
		scanf("%d",&value);
		
		index=0;
		
		while(arr[index]!=-1)
		{
			if(value<arr[index])
			{
				index=2*index+1;
			}
			else{
				index=2*index+2;
			}
		
		}
		arr[index]=value;
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
