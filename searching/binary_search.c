#include<stdio.h>
#define SIZE 50
int binary_search(int [],int,int,int);
int main()
{
	int array[SIZE],n,i,element,result;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	printf("\nenter the element to search:\n");
	scanf("%d",&element);
	result=binary_search(array,0,n-1,element);
	if(result==-1)
	{
		printf("element is not found in the array\n");
	}
	else
		printf("element is found in the index is:%d\n",result);
}
int binary_search(int a[],int low,int high,int ele)
{
	int mid;
	if(high >= low)
	{
		mid=(high+low)/2;
		if(a[mid]==ele)
			return mid;
		else if(a[mid]>ele)
			return binary_search(a,low,mid-1,ele);
		else
			return binary_search(a,mid+1,high,ele);
	}
	else
		return -1;
}
