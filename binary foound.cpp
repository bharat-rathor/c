#include<stdio.h>

int main()
{
	int key,high,low,mid,n;
	int arr[100];
	int found=0;
	
	printf("Enter Element size : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&arr[i]);
	}
	
	
	printf("enter key : ");
	scanf("%d",&key);
	
	high=n-1;
	low=0;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		
		if(arr[mid]==key)
		{
			printf("element found\n");
			found=1;
			break;
		}
		else if(key>arr[mid])
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}
		
	}
	
	if(!found)
	{
		printf("not found");
	}
}
