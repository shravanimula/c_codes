#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter b number:");
	scanf("%d",&b);
	printf("befoe swap: a=%d\t,b=%d\n",a,b);
	a = a ^ b;
	b= a ^ b;
	a= a ^ b;
	printf("after swap : a=%d\t,b=%d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after arithmetic: a = %d\t,b=%d\n", a, b);
}

