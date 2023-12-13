#include<stdio.h>
#define SIZE 50
void frequency_ele(int a[],int n)
{
	int cnt=0,i,j;
	for(i=0;i<n;i++)
	{
		cnt=1;
		if(a[i] > 0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					cnt++;
					a[j]=-1;
				}
			}
			printf("array of elements:%d\tcount=%d\n",a[i],cnt);
		}
	}
}

int main()
{
	int array[SIZE],n,i;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	frequency_ele(array,n);
}
