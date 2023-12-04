#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *array,i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	if(array==NULL)
		printf("memory is not allocated\n");
	else
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",(array+i));
		}
	}
	printf("1d array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(array+i));
}
