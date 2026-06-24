#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("YOu Can vote");
    }
    else{
        printf("You  can't vote");
    }
}