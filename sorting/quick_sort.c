#include<stdio.h>
#define SIZE 50
void quick_sort(int a[],int low,int high)
{
	int start,end,temp,pivot;
	if(low < high)
	{
		pivot=low;
		start=low;
		end=high;
		while(start < end)
		{
			while(a[start] <= a[pivot] && start < high)
			{
				start++;
			}
			while(a[end] > a[pivot])
			{
				end--;
			}
			if(start < end)
			{
				temp=a[start];
				a[start]=a[end];
				a[end]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[end];
		a[end]=temp;
		quick_sort(a,low,end-1);
		quick_sort(a,end+1,high);
	}
}

int main()
{
	int array[SIZE],i,n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sort elements:");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	quick_sort(array,0,n-1);
	printf("\n after sorting elements:");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
}
