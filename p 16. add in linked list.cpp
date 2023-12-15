#include<iostream>
using namespace std;
int main()
{
	int n,i,n1,n2=1;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	cin>>n1;
	for(i=n1;i<=n;i++)
	{
		a[i]=a[i]+n2;
		n2++;
	}
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
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
	node* newnode=(node*)malloc(sizeof(node));
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
	printf("\n\n");
	printf("inserted successfully: %d ",val);
	printf("\n\n");
}

void display()
{
	node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp -> data );
		temp = temp -> next;
	}
	printf("\n\n");
}
int main()
{
	int choice,val,pos;
	while(1)
	{
		printf("1.insert at begining\n2.display the list\nenter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter data:");
				scanf("%d",&val);
				insertatbeg(val);
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("wrong choice\n");
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
node* head=NULL;

void insertatbeg(int val)
{
	node* newnode = (node*)malloc(sizeof(node));
	newnode -> data = val;
	if(head==NULL)
	{
		newnode -> next =NULL;
		head = newnode;
	}
	else
	{
		newnode -> next = head;
		head=newnode;
	}
	printf("\n\ninserted successfully:%d\n\n",val);
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
	int choice,val,pos;
	while(1)
	{
		printf("1.insert at beg\n2.display\n3.exit\nenter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value:");
				scanf("%d",&val);
				insertatbeg(val);
				break;
			case 2:
				printf("values are:\n");
				display();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("wrong choice\n");
		}
	}
}
