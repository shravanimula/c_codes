#include<stdio.h>
#define SIZE 50
void frequency_cnt(int a[],int n)
{
	int i,j,cnt=0;
	for(i=0;i<n;i++)
	{
		cnt=1;
		if( a[i] > 0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					cnt++;
					a[j]=-1;
				}
			}
			printf("array of element:%d\tcnt=%d\n",a[i],cnt);
		}
	}
}

int main()
{
	int array[SIZE],n,i;
	printf("enter the siex of array:");
	scanf("%d",&n);
	printf("enter the array element:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	frequency_cnt(array,n);
}
