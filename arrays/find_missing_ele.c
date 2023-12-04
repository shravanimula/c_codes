//Find the missing number in a given integer array of 1 to 100

#include<stdio.h>
int missing_element(int a[],int n)
{
	int i,total;
	total=(n+1)*(n+2)/2;
	for(i=0;i<n;i++)
	{
		total-=a[i];
	}
	return total;
}
int main()
{
	int array[]={1,2,4,5,6,7};
	int i,n,result;
	n=sizeof(array)/sizeof(array[0]);
	result=missing_element(array,n);
	printf("missing element is:%d\n",result);
}
