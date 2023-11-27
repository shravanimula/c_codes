#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n;
	printf("enter the size of array:");
	scanf("%d\n",&n);
	a=(int *)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("memory is not allocated\n");
	}
	else
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);//(a+i))
	}
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(a+i));
}
