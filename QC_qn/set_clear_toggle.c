#include<stdio.h>
int main()
{
	int num,pos;
	printf("enter the number:");
	scanf("%d", &num);
	printf("enter the position:");
	scanf("%d",&pos);
	printf("clear the bit:%d\n",(num &(~(1 << pos))));
	printf("set the bit:%d\n",(num | (1 << pos)));
	printf("toggle the bit is :%d\n",(num ^(1 << pos)));
}
