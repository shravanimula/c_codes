#include<stdio.h>
#define SIZE 50
int second_max(int a[],int n)
{
	int i,max1=0,max2=0;
	for(i=0;i<n;i++)
	{
		if(a[i] > max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i] > max2 && a[i] <max1)
		{
			max2=a[i];
		}
	}
	return max2;
}

int main()
{
	int array[SIZE],i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int result=second_max(array,n);
	printf("second max is:%d\n",result);
}
