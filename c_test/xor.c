/*
Given two integers N and K, to find total number of XOR lead numbers from given range N, where (Z  ^ K) > (Z &K). Z is from 1 to N

Input:
Two integers, N and K

Sample:
Input:
N = 5, K = 2

Output:
3
*/
#include<stdio.h>
int main()
{
	int n,k,i;
	scanf("%d%d",&n,&k);
	int cnt=0;
	for(i=1;i<=n;i++)
	{
		if((i ^ k) > ( i & k))
		{
			cnt++;
		}
	}
	printf("%d\n",cnt);
}
