#include<stdio.h>

int print(int *arr);
int main()
{
	int arr[]={1,2,3,4,5};
	
	print(arr);
	return 0;
	
}

int print(int *arr)
{
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
}
