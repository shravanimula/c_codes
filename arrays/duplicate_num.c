//Find the duplicate number on a given integer array.
//(e.g.: I/P: [3,1,3,4,2]; O/P: 3 )
#include<stdio.h>
#define SIZE 50
void duplicat_number(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("duplicate elements is:%d\n",a[i]);
			}
		}
	}
}

int main()
{
	int n,array[SIZE],i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	duplicat_number(array,n);
	
}
