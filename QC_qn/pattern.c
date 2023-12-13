/*
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 */
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the row size:");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=1;j<=i;j++)
			printf("%d ",j);
	}
}
