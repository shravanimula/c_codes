#include<stdio.h>
int main()
{
	int num,cnt_ones=0,cnt_zeros=0;
	printf("enter a number:");
	scanf("%d",&num);
	while( num > 0)
	{
		if(num & 1)
		{
			cnt_ones++;
		}
		else
		{
			cnt_zeros++;
		}
		num=num >> 1;
	}
	printf("count the number of zeros:%d\n",cnt_zeros);
	printf("count the number of ones:%d\n",cnt_ones);
}

