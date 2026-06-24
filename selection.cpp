#include<stdio.h>

int main()
{
	int arr[]={4,5,6,7,2};
	
	int min;
	for(int i=0;i<5;i++)
	{
		 min=i;
		
		for(int j=i+1;j<5;j++)
		{
			if(arr[j]<arr[min])
				min=j;
			
		 	
		}
		
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
}
