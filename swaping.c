#include<stdio.h>
int main()
{
	int num,bitpos1,bitpos2,bit=7,data,result;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the bitpos1:");
	scanf("%d",&bitpos1);
	printf("enter the bitpos2:");
	scanf("%d",&bitpos2);
	if((bitpos1 > 7) || (bitpos1 < 0) || (bitpos2 > 7) || (bitpos2 < 0))
	{
		printf("error");
	}
	else
	{
		data=(((num >> bitpos1) & 1) | ((num >> bitpos2) & 1));
		result=num^((data<<bitpos1) | (data << bitpos2));
	}
	printf("%d\n",result);
}
