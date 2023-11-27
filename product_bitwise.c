#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter b number:");
	scanf("%d",&b);
	int result=0;
	while(b > 0)
	{
		if(b & 1)
		{
			result=result+a;
		}
		a=a << 1;
		b =b >> 1;
	}
	printf("%d\n",result);
}
