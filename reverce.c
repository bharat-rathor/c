#include<stdio.h>
int main()
{
    int ar[5];
    for(int i=0;i<=4;i++)
    {
        printf("Enter Elements  %d = \n",i);
        scanf("%d\n",&ar[i]);
    }

    for(int i=4;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
}