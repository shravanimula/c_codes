#include<stdio.h>
#define SIZE 50
void reverse_array(int a[],int n)
{
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		a[i] = a[i] ^ a[j];
		a[j] = a[i] ^ a[j];
		a[i] = a[i] ^ a[j];
	}
	printf("\nafter reverse :");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

int main()
{
	int array[SIZE],i,n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before reverse array is:");
	for(i=0;i<n;i++)
		printf("%d\t", array[i]);
	reverse_array(array,n);
}
