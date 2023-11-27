#include<stdio.h>
int main()
{
	int a,b,value;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	if(b!=0)
	{
		value=(a & b) <<1;
		a = a ^ b;
		b = value;
	}
	printf("the  addition of two numbers is :%d\n",a);
}
