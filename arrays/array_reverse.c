#include<stdio.h>
#define SIZE 50
void array_reverse(int a[],int n)
{
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		a[i]=a[i] ^ a[j];
		a[j]=a[i] ^ a[j];
		a[i]=a[i] ^ a[j];
	}
	printf("after reverse array :\n");
	for(i=0;i<n;i++)
		printf("%d   ",a[i]);
}

int main()
{
	int array[SIZE],n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the arra elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before reverse:\n");
	for(i=0;i<n;i++)
		printf("%d  ",array[i]);
	array_reverse(array,n);
}
