#include<stdio.h>
int main()
{
	int num,rev=0;
	printf("enter a number:");
	scanf("%d",&num);
	while(num > 0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	printf("reverse the number is:%d\n",rev);
}
