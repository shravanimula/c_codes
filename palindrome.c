#include<stdio.h>
int main()
{
	int num,temp,rev=0;
	printf("enter a number:");
	scanf("%d",&num);
	temp=num;
	while(temp > 0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	if(num == rev)
	{
		printf("number is palindrome\n");
	}
	else
		printf("number is not a palindrome\n");
}
