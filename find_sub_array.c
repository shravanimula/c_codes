#include<stdio.h>
#define SIZE 20
void find_sub_array(int [],int [],int,int);
int main()
{
	int array1[SIZE],n1,i,array2[SIZE],n2;
	printf("enter the array1 size:");
	scanf("%d",&n1);
	printf("enter the array1 elements:\n");
	for(i=0;i<n1;i++)
		scanf("%d",&array1[i]);
	printf("enter the array2 size:");
	scanf("%d",&n2);
	printf("enter the array2 elements:\n");
	for(i=0;i<n2;i++)
		scanf("%d",&array2[i]);
	find_sub_array(array1,array2,n1,n2);
}
void find_sub_array(int a1[],int a2[],int n1,int n2)
{
	int i,cnt=1;
	for(i=0;i<n1;i++)
	{
		int j;
		if(a1[i]==a2[0])
		{
			for(j=1;j<n2;j++)
			{
				if(a1[i+j]=a2[j])
				{
					cnt++;
				}
			}
		}
	}
	if(n2==cnt)
	{
		printf("sub array is found\n");
	}
	else
		printf("sub array is not found\n");
}
