#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *link;
};
struct st *add_first(struct st *);
void display(struct st *);
void middle_element(struct st *);
int main()
{
	struct st *head=NULL;
	while(1)
	{
		int choice;
		printf("\n 1.add_first  2.display  3.middle_element   4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_first(head);
			       break;
			case 2:display(head);
			       break;
			case 3:middle_element(head);
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
		printf("newnode is not created\n");
	else
	{
		printf("enter the data:");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(ptr==NULL)
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



void middle_element(struct st *ptr)
{
	struct st *slow=NULL,*fast=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else if(ptr->link==NULL)
		printf("list is having only one node\n");
	else
	{
		slow=fast=ptr;
		while(slow->link!=NULL && fast->link!=NULL && fast->link->link!=NULL)
		{
			slow=slow->link;
			fast=fast->link->link;
		}
		printf("the middle node is:%d\n",slow->data);
	}
}
