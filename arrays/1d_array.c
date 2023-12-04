#include<stdio.h>
#define SIZE 50
int main()
{
	int array[SIZE],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
}
