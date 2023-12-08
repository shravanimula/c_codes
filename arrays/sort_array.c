#include<stdio.h>
#define SIZE 50
void sort_array(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				a[i]=a[i] ^ a[j];
				a[j]=a[i] ^ a[j];
				a[i]=a[i] ^ a[j];
			}
		}
	}
	printf("\nafter sort the array is :\n");
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
	printf("before sort the array elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	sort_array(array,n);
}
