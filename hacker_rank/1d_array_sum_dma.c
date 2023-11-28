/*
Input Format

The first line contains an integer,

The next line contains

space-separated integers.

Constraints


Output Format

Print the sum of the integers in the array.

Sample Input 

6
16 13 7 2 1 12 

Sample Output 

51

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int *a,i,n;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int sum=0;
    for(i=0;i<n;i++)
        sum=sum+a[i];
    free(a);
    printf("%d",sum);
    return 0;
}
