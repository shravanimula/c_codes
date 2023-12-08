#include<stdio.h>
#define SIZE 50
int linear_search(int [],int ,int);
int main()
{
	int array[SIZE],i,element,n,result;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	printf("\nenter the element to search:\n");
	scanf("%d",&element);
	result=linear_search(array,n,element);
	if(result==-1)
	{
		printf("element is not found in the array\n");
	}
	else
		printf("element is found in the array:%d\n",result);

}
int linear_search(int a[],int n ,int ele)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
			return i;

	}
	return -1;
}
