#include<stdio.h>
int main()
{
    //decalration + size decalre in array
    // int a[5]={10,20,30,40,50};
    // printf("The Value Of a[0] = %d",a[0]);

    // int m1=10,b=20,c=30,d=40;
    // int total=m1+b+c+d;
    // printf("Total Is : %d\n",total);
    // float per=total/4;
    // printf("Percentage Is %f",per);

    int arr[5];
    for(int i=0;i<=4;i++)
    {
        printf("Enter Number :");
        scanf("%d\n",&arr[i]);
    }
    
    return 0;

}