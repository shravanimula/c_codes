#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct st{
	int data;
	struct st *link;
};
struct st *add_first(struct st *);
void display(struct st *);
bool sll_loop_or_not(struct st *);
int main()
{
	struct st *head=NULL;
	while(1)
	{
		int choice;
		printf("\n 1.add_first  2.display  3.sll_loop_or_not  4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_first(head);
			       break;
			case 2:display(head);
			       break;
			case 3:if(sll_loop_or_not(head))
			       {
				       printf("sll have loop\n");
			       }
			       else
				       printf("sll not have a loop\n");
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
		printf("entter the data:");
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


bool sll_loop_or_not(struct st *ptr)
{
	struct st *temp=NULL;
	if(ptr==NULL)
		printf("list is empty\n");
	else
	{
		temp=ptr;
		while(temp!=NULL)
		{
			if(temp->link==ptr)
				return true;
			temp=temp->link;
		}
	}
	return false;
}
