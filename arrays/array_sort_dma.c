#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
	    scanf("%d",(a+i));
    printf("before sort the array is:");
    for(i=0;i<n;i++)
	    printf("%d\t",*(a+i));
    int j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                a[j] = a[j] ^ a[j+1];
                a[j+1] = a[j] ^ a[j+1];
                a[j] = a[j] ^ a[j+1];
            }
        }
    }
    printf("\nafter sort the array is:");
    for(i=0;i<n;i++)
	    printf("%d\t",a[i]);
}
