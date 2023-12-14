#include<stdio.h>
#define row 3
#define col 2
int main()
{
	int a1[row][col],a2[row][col],a3[row][col];
	int i,j;
	printf("enter the array1 elements:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("enter the array2 elements:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	printf("the array1  elements are :\n");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a1[i][j]);
		}
	}
	
	printf("\nthe array2  elements are :\n");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a2[i][j]);
		}
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			a3[i][j]=a1[i][j]+a2[i][j];
		}
	}


	printf("\nthe addtion of two array elements are :\n");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a3[i][j]);
		}
	}
}
