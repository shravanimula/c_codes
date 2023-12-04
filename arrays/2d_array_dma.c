#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a, r,c,i;
	printf("enter the rows:");
	scanf("%d",&r);
	printf("enter the clos:");
	scanf("%d",&c);
	a=(int **)malloc(r*sizeof(int *));
	for(i=0;i<r;i++)
	{
		a[i]=(int *)malloc(c*sizeof(int));
	}
	printf("enter the array elements are:\n");
	for(i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the 2d array is:\n");
	for(i=0;i<r;i++,printf("\n"))
	{
		for(int j=0;j<c;j++)
		{
			printf("%d   ",a[i][j]);
		}
	}
	for(i=0;i<r;i++)
		free(a[i]);
}
