#include<stdio.h>
#define SIZE 50
void sort_array(int [],int);
int main()
{
	int array[SIZE],i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sort the array elemnts are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	sort_array(array,n);
}
void sort_array(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nafter sort the array is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
