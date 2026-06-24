#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node *add;
};
struct node *start=NULL,*temp,*new1,*pre,*next;
int create_node()
{
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	start=(struct node *)malloc(sizeof(struct node));
	
	start->data=n;
	start->add=NULL;
	
	temp=start;
	char ch;
	printf("Do You Want To Continue : ");
	scanf(" %c",&ch);
	
	while(ch=='Y' || ch=='y')
	{
		printf("Enter Number : ");
		scanf("%d",&n);
		
		new1=(struct node *)malloc(sizeof(struct node));
		new1->data=n;
		new1->add=NULL;
		
		temp->add=new1;
		
		temp=temp->add;
		printf("Do You Want To Continue : ");
	    scanf(" %c",&ch);
	}
}

int display()
{
	if(start==NULL)
	{
		printf("The List Empty");
	}
	else{
		temp=start;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->add;
		}
	}
}
int insert_first()
{
	int n;
	if(start==NULL)
	{
		printf("Empty Set\n");
	}
	else{
		printf("Enter Number : ");
		scanf("%d",&n);
		
		new1=(struct node*)malloc(sizeof(struct node));
		new1->data=n;
		new1->add=start;
		start=new1;
	}
}

int insert_last()
{
	int n;
	if(start==NULL)
	{
		printf("Empty List \n");
	}
	else{
		printf("Enter Number : ");
		scanf("%d",&n);
		new1=(struct node *)malloc(sizeof(struct node));
		new1->data=n;
		new1->add=NULL;
		temp=start;
		while(temp->add!=NULL)
		{
			temp=temp->add;
		}
		temp->add=new1;
	}
}
int insert_midd()
{
	int n;
	int i=0;
	int pos;
	if(start==NULL)
	{
		printf("The Empty Set \n");
	}
	else{
		printf("Enter Number : ");
		scanf("%d",&n);
		
		new1=(struct node *)malloc(sizeof(struct node));
		new1->data=n;
		new1->add=NULL;
		temp=start;
		printf("Enter Postion To Add Node : ");
		scanf("%d",&pos);
		while(i<pos)
		{
			pre=temp;
			temp=temp->add;
			i++;
		}
		new1->add=temp;
		pre->add=new1;
		
	}
}

int delete_first()
{
	if(start==NULL)
	{
		printf("Empty Set \n");
	}
	else{
		temp=start;
		start=start->add;
		printf("Deleted node Is : %d",temp->data);
		
		free(temp);
	}
}
int delete_last()
{
	if(start==NULL)
	{
		printf("Empty Set \n");
	}
	else{
		temp=start;
		while(temp->add!=NULL)
		{
			pre=temp;
			temp=temp->add;
		}
		pre->add=NULL;
		printf("%d ",temp->data);
		
		free(temp);
   	}
}

int delete_midd()
{
	int pos;
	int i=0;
	if(start==NULL)
	{
		printf("Empty Set \n");
	}
	else{
		temp=start;
		printf("Enter Position To Delete Node : ");
		scanf("%d",&pos);
		
		while(i<pos)
		{
			pre=temp;
			temp=temp->add;
			i++;
		}
		next=temp->add;
		pre->add=next;
		printf("%d ",temp->data);
		
		free(temp);
	}
}
int main()
{
	int choice;
	while(1)
	{
	
	printf("\nlinked list operation\n");
	printf("1 create node\n");
	printf("2 display node\n");
	printf("3 isert first node\n");
	printf("4 Insert Node Last\n");
	printf("5 Insert Node Middle \n");
	printf("6 Delete Node From First\n");
	printf("7 Delete Node From Last\n");
	printf("8 Delete From Middle\n");
	printf("Enter Choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			create_node();
			break;
		case 2:
			display();
			break;
		case 3:
			insert_first();
			break;
		case 4:
			insert_last();
			break;
		case 5:
			insert_midd();
			break;
		case 6:
			delete_first();
			break;
		case 7:
			delete_last();
			break;
		case 8:
			delete_midd();
			break;
			
		default:
			printf("Enter Valid Choice");
	}
}
	
	
	
}
