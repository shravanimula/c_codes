/*
Given three inputs A B and N.
You can do any one of the following operations.
Increment A by B 
Increment B by A

Return the min number of increments to make A or B greater than N.
Sample:
Input:
4 4 16
*/

#include<stdio.h>
int min_increment(int a,int b,int n)
{
	int cnt=0;
	while(a<=n)
	{
		a=a+b;
		cnt++;
	}
	return cnt;
}
	
int main()
{
	int a,b,n;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter b number:");
	scanf("%d",&b);
	printf("enter n number:");
	scanf("%d",&n);
	int cnt_a=0,cnt_b=0,cnt;
	if( a > b || a < b)
	{
		cnt_a=min_increment(a,b,n);
		cnt_b=min_increment(b,a,n);
		if(cnt_a > cnt_b)
		{
			cnt=cnt_b;
		}
		else
		{
			cnt=cnt_a;
		}
	}
      	else if(a == b)
	{
		cnt_a=min_increment(a,b,n);
		cnt=cnt_a - 1;
       	}
	printf("%d\n",cnt);
}

