#include<stdio.h>
#define SIZE 50
void insertion_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j >= 0 && a[j]  > temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nafter sort elemenets:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

		
		
int main()
{
	int array[SIZE],i,n;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sort elements:");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	insertion_sort(array,i);
}
