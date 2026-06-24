#include<stdio.h>

int main()
{
	int choice,num;
	char ch;
	printf("1 for number \n");
	printf("2 for character \n");
	
	printf("enter choice : ");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:
			printf("Enter Number between 1 to 7 : ");
			scanf("%d",&num);
			if(num==1)
			{
				printf("Monday\n");
			}else if(num==2){
				printf("tuesday\n");
			}
			else if(num==3)
			{
				printf("wednesday\n");
			}
			else if(num==4)
			{
				printf("thrusday\n");
			}
			else if(num==5)
			{
				printf("friday\n");
			}
			else if(num==6)
			{
				printf("saturday\n");
			}
			else if(num==7)
			{
				printf("sunday\n");
			}
			else{
				printf("invalid choice \n");
			}
			break;
		case 2:
			printf("enter character : ");
			scanf(" %c",&ch);
			if(ch=='m' || ch=='M')
			{
				printf("monday\n");
			}
			else if(ch=='t')
			{
				printf("tuesday\n");
			}
			else if(ch=='w' || ch=='W')
			{
				printf("wednesday\n");
			}
			else if(ch=='T')
			{
				printf("Thursday\n");
			}
			else if(ch=='f' || ch=='F'){
				printf("friday\n");
			}
			else if(ch=='S')
			{
				printf("staurday\n");
			}
			else if(ch=='s'){
				printf("sunday\n");
			}
			else{
				printf("enter valid choice\n");
			}
			break;
		default:
			printf("enter valid choice\n");
			
	}
}
