#include<stdio.h>
#define SIZE 50
void selection_sort(int a[],int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min] > a[j])
				min=j;
		}
		if(min!=i)
		{
			a[i] = a[i] ^ a[min];
			a[min] = a[i] ^ a[min];
			a[i] = a[i] ^ a[min];
		}
	}
	printf("\nafter sort the elements:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

		
int main()
{
	int array[SIZE],n,i;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sorting :");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	selection_sort(array,n);
}
