#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int);
int pop();
int peek();
int main()
{
	int choice,data;
	while(1)
	{
		printf("1:push  2:pop  3:peek 3:exit\n");
		printf("enter ur choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the data to be pushed\n");
			       scanf("%d",&data);
			       push(data);
			       break;
			case 2:if(top==-1)
			       {
				       printf("stack is empty\n");
			       }
			       else
			       {
				       printf("data poped:%d\n",pop());
			       }
			       break;
			case 3:if(top==-1)
			       {
				       printf("stack is empty\n");
			       }
			       else
			       {
				       printf("the data pointed by the top is:%d\n",peek());
			       }
			       break;
			case 4:exit(0);
		}
	}
}
void push(int data)
{
	if(top==MAX-1)
	{
		printf("stack is full\n");
	}
	else
	{
		stack[++top]=data;
	}
}
int pop()
{
	return stack[top--];
}
int peek()
{
	return stack[top];
}
