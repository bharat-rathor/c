#include<stdio
.h>

int add();

int main()
{
	printf("sum : %d",add());
	return 0;
}
int add()
{
	int n1,n2;
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	
	return n1+n2;
	
}
