#include<stdio.h>
int main()
{
	int num,pos;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	printf("after setting the bit :%d\n",(num | (1 << pos)));
	printf("after clearing the bit is :%d\n",(num & (~(1 << pos))));
	printf("after toggle the bit is:%d\n",(num ^ (1 << pos )));
}
