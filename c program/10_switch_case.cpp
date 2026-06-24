#include<stdio.h>
int main()
{
	int choice,i=0;

		do{
		printf("Enter choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				printf("monday\n"); 
				break;
			case 2:
				printf("tuesday\n");
				break;
			case 3:
				printf("wednesday\n");
				break;
			case 4:
				printf("thrusday\n");
				break;
			case 5:
				printf("friday\n");
				break;
			case 6:
				printf("staurday\n");
				break;
			case 7:
				printf("sunday\n");
				break;
			default:
				printf("invalid choice\n");
		}
		i++;
	}while(i<7);
}
