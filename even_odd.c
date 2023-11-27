#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num & 1 == 1)
	{
		printf("given number is odd\n");
	}
	else
	{
		printf("given number is even\n");
	}
}
