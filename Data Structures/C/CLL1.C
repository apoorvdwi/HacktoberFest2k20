#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	int data;
	node *next;
	};
node *next=NULL;
struct node *last=NULL;
void insert(int e,int c1);
void del(int c2);
void search();
void traverse();

void main()
{
	int c,c1,e;
		do{	clrscr();
			printf("\nCIRCULAR LINKED LIST");
			printf("\nRAJAT GUPTA [ 25-IT-19 ]");
			printf("\n\n------MENU------\n1. Insertion \n2. Deletion \n3. Searching \n4. Traversal \n5. Exit");
			printf("\nEnter your choice :  ");
			scanf("%d",&c);
			switch(c){
			case 1: printf("Enter the Data: ");
				scanf("%d",&e);
				printf("\nInsert At: \n1. Begining \n2. End \n3. Random  \nChoice : ");
				scanf("%d",&c1);
				insert(e,c1);
				getch();
				break;
			case 2: printf("\nDelete From: \n1. Begining \n2. End \n3. Random  \nChoice : ");
				scanf("%d",&c1);
				del(c1);
				getch();
				break;
			case 3:	search();
				getch();
				break;
			case 4: traverse();
				getch();
				break;
			case 5: return;
			default: printf("Wrong Choice");
				}
		}while(c!=5);
}

void insert(int e,int c1)
{
	struct node *n = (struct node*)malloc(sizeof(struct node));
	n->data=e;
	if(last==NULL)
	{
		last=n;
		n->next=last;
		printf("NODE Inserted");
		return;
	}

	if(c1==1 || c1==2)
	{
		n->next=last->next;
		last->next=n;
		if(c1==2)
		last=n;
	}

	else{
		int l,i;
		struct node *temp;
		temp=last->next;
		printf("Enter Location where new node is to be inserted:  ");
		scanf("%d",&l);
		for(i=0;i<l;i++)
		{
			temp = temp->next;
			if(temp==last->next)
			{
				printf("Cannot Insert Node ");
				return;
			}
		}
		n->next=temp->next;
		temp->next=n;
		if(temp==last)
		last=n;
	}
	printf("NODE Inserted");
}

void del(int c1)
{
	if(last==NULL)
	{
		printf("Circular Linked list is empty ");
		return;
	}
	struct node *p,*t;

	t=last->next;
	if((t->next==last->next) && (c1==1 || c1==2))
	{
		last=NULL;
		printf("Only Node is deleted");
		return;
	}

	if(c1==1)
	{
		last->next=t->next;
	}

	else if(c1==2)
	{
		while(t->next!=last)
			t=t->next;
		t->next=last->next;
		last=t;
	}

	else
	{
		int l,i;
		printf("Enter Location from where node is to be deleted:  ");
		scanf("%d",&l);
		p=t;
		for(i=0;i<l;i++)
		{
			p=t;
			t = t->next;
			if(t->next==last->next)
			{
				printf("Cannot Delete Node ");
				return;
			}
		}
		if(p==t)
		{
			last=NULL;
			printf("Only Node Deleted");
			return;
		}
		p->next=t->next;
	}
	printf("Node DELETED ");
}

void search()
{
	if(last==NULL)
	{
		printf("Empty Linked List");
		return;
	}
	struct node *t;
	t=last->next;
	int e,pos=-1,c=0;
	printf("Enter the element to be searched in Linked List  ");
	scanf("%d",&e);
	do{
		c++;
		if(t->data==e)
		{
			pos=c;
			break;
		}
		else
		t=t->next;
	}while(t!=last->next);

	if(pos!=-1)
		printf("Element %d Found at position %d",e,pos);
	else
		printf("Element Not Found");
}

void traverse()
{
	if(last==NULL)
	{
		printf("Empty Linked List");
		return;
	}
	struct node *s;
	s=last->next;
	while(s!=last)
	{
		printf("%d ->",s->data);
		s=s->next;
	}
	printf("%d",last->data);
}