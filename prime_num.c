#include<stdio.h>
int main()
{
	int num,flag=0,i;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("given number is not prime number\n");
	}
	else
	{
		printf("give number is prime number\n");
	}
}
