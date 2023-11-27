#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a,i,j,rows,cols;
	printf("enter the rows:");
	scanf("%d",&rows);
	printf("enter the cols:");
	scanf("%d",&cols);
	a=(int **)malloc(rows*sizeof(int *));
	for(i=0;i<rows;i++)
	{
		a[i]=(int *)malloc(cols*sizeof(int));
	}
	printf("enter the 2d array elements are:");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the 2d array elements are:\n");
	for(i=0;i<rows;i++,printf("\n"))
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
		free(a[i]);
}
