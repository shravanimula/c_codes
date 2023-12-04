//find the largest and smallest element in the array

#include<stdio.h>
#define SIZE 50
void max_min_element(int a[],int n)
{
	int i,max,min;
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		if(min > a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
	printf("max=%d\tmin=%d\n",max,min);
}
int main()
{
	int array[SIZE],n,i;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	max_min_element(array,n);
}
