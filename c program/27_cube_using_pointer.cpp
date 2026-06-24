#include<stdio.h>

int cube(int *num);
int main()
{
	int num=5;
	printf("the value : %d\n",num);
	printf("the cube : %d\n",cube(&num));
	
	printf("the value : %d\n",num);
	
}

int cube(int *num)
{
	*num = *num * *num * *num;
	return *num;
}
