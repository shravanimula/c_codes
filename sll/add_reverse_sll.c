#include<stdio.h>
#include<stdlib.h>
struct st {
	int data;
	struct st *link;
};
struct st *add_first(struct st *);
void display(struct st *);
struct st *reverse(struct st *);
int main()
{
	struct st *head=NULL;
	while(1)
	{
		int choice;
		printf("\n1.add_first  2.display  3.reverse  4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_first(head);
			       break;
			case 2:display(head);
			       break;
			case 3:head=reverse(head);
			       break;
			case 4:exit(0);
		}
	}
}

struct st *add_first(struct st *ptr)
{
	struct st *newnode=NULL;
	newnode=(struct st *)malloc(sizeof(struct st));
	if(newnode==NULL)
		printf("memory is not created\n");
	else
	{
		printf("enter the data:");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(newnode==NULL)
			ptr=newnode;
		else
			newnode->link=ptr;
		ptr=newnode;
	}
	return ptr;
}

void display(struct st *ptr)
{
	if(ptr==NULL)
		printf("list is empty\n");
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->link;
		}
	}
}

struct st *reverse(struct st *ptr)
{
	struct st *cur=NULL,*prev=NULL,*next=NULL;
	if(ptr==NULL)
		printf("list is empty\n");
	else if(ptr->link==NULL)
		printf("list is having only one node\n");
	else
	{
		next=ptr;
		while(next!=NULL)
		{
			prev=cur;
			cur=next;
			next=next->link;
			cur->link=prev;
		}
		ptr=cur;
	}
	return ptr;
}
