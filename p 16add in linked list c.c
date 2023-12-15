/*#include<stdio.h>
#include<stdlib.h>

struct lnode
{
	int data;
	struct lnode* next;
};
typedef struct lnode node;
node* head = NULL;

void insertatbeg(int val)
{
	node* newnode = (node*)malloc(sizeof(node));
	newnode -> data = val;
	if(head==NULL)
	{
		newnode -> next = NULL;
		head = newnode;
	}
	else
	{
		newnode -> next = head;
		head = newnode;
	}
	printf("\n\ninserted successfully%d\n\n",val);
}

void display()
{
	node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp -> data);
		temp = temp -> next;
	}
	printf("\n\n");
}
int main()
{
	int choice,val;
	while(1)
	{
		printf("1.insert at beg\n2.display\n3.exit\nenterchoice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value:");
				scanf("%d",&val);
				insertatbeg(val);
				break;
			case 2:
				printf("\n\nvalues are\n");
				display();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("\n\nwrong choice\n\n");
		}
	}
}*/


#include<stdio.h>
#include<stdlib.h>

struct lnode
{
	int data;
	struct lnode* next;
};

typedef struct lnode node;
node* head = NULL;

void insertatbeg(int val)
{
	node* newnode = (node*)malloc(sizeof(node));
	newnode -> data = val;
	if(head==NULL)
	{
		newnode -> next = NULL;
		head = newnode;
	}
	else
	{
		newnode -> next = head;
		head = newnode;
	}
	printf("\n\ninserted successfully%d\n\n",val);
}

void display()
{
	node* temp = head;
	while(temp!=NULL)
	{
		printf("%d ",temp -> data);
		temp = temp -> next;
	}
	printf("\n\n");
}

void insertatend(int val)
{
	node* newnode = (node*)malloc(sizeof(node));
	newnode -> data = val;
	newnode -> next = NULL;
	if(head==NULL)
	{
	head = newnode;
    }
    else
    {
    node* temp = head;
    	while(temp -> next != NULL)
    	{
    		temp = temp -> next;
		}
		temp -> next = newnode;
	}
	printf("\n\ninserted at end successfully%d\n\n",val);
}

void insertatpos(int pos, int val)
{
	node* newnode = (node*)malloc(sizeof(node));
	newnode -> data = val;
	newnode -> next = NULL;
	if(head==NULL)
	{
		head = newnode;
	}
	node* temp = head;
	
}
int main()
{
	int choice,val;
	while(1)
	{
		printf("1.insert at beg\n2.display\n3.exit\n4.insert at end\n5.insert at pos\nenter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value:");
				scanf("%d",&val);
				insertatbeg(val);
				break;
			case 2:
				printf("values in list are:\n\n");
				display();
				break;
			case 3:
				exit(0);
				break;
			case 4:
				printf("enter value:");
				scanf("%d",&val);
				insertatend(val);
				break;
			case 5:
				printf("enter pos:");
				scanf("%d",&pos);
				printf("enter val:");
				scanf("%d",&val);
				insertatpos(pos,val);
				break;
			default:
				printf("\n\nwrong choice\n\n");
		}
	}
}
