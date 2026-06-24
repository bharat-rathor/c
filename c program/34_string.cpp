#include<stdio.h>
#include<string.h>

int main()
{
	
	// jab apne character ka array banate hai tab usme length dete hai tab usme value assigen karni hoti nahi haii 
	
//	char name[50]; // assign nahi karte sskte hai 
//	 
//	char name1[]="bharat rathor";
//	
//	char name3[]={'a','b','c','d','\0'};
//	
//	
//	for(int i=0;name1[i]!='\0';i++)
//	{
//		
//		printf("%c",name1[i]);
//	}
//	
//	printf("\n");
//	int length=strlen(name);
//	printf("the length : %d",length);

	char name[20];
	printf("Enter Name : ");
	scanf("%s",&name);
	
	printf("Name Is : %s",name);
}
