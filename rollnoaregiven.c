#include<stdio.h>
int main()
{
    int marks[10]={50,40,34,56,45,90,40,50,60,50};
    for(int i=0;i<=10;i++)
    {
        if(marks[i]<35)
        {
            printf("%d \n",i);
            break;
        }
    }
    return 0;
}