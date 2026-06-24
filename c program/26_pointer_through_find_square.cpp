#include<stdio.h>

int sqr(int *num);
int main()
{
	int num=2;
	
	printf("The Square : %d",sqr(&num));
	return 0;
}

int sqr(int *num)
{
	return *num * *num ;
}
