#include<stdio.h>
#define SIZE 50
void bubble_sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				a[j] = a[j] ^ a[j+1];
				a[j+1] = a[j] ^ a[j+1];
				a[j] = a[j] ^ a[j+1];
			}
		}
	}
	printf("\nafter sort elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

int main()
{
	int array[SIZE],i,n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array is elements:");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sorting elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	bubble_sort(array,n);
}

