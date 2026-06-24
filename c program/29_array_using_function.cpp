#include<stdio.h>

void arr(int arr1[],int length);
int main()
{
	int arr1[]={1,2,3,4,5};
	
	arr(arr1,5);
	return 0;
}
void arr(int arr1[],int length)
{
	for(int i=0;i<length;i++)
	{
		printf("%d ",arr1[i]);
	}
}
