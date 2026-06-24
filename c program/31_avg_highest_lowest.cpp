
#include<stdio.h>

int main()
{
	int num,sum=0;
	float avg;
	printf("Enter Number Of Marks : ");
	scanf("%d",&num);
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter marks %d : " , i+1 );
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avg = sum/num;
	printf("The Total Sum  is : %d\n",sum);
	printf("the average is : %f\n",avg);
	int temp;
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}	
	}
	printf("high value : %d",temp);
	
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(arr[i]<arr[j])
			{
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}	
	}
	printf("high value : %d",temp);
	
	
	
}
