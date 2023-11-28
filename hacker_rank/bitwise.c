/*
 Example
n=3
k=3
The results of the comparisons are below:

a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1

For the and comparison, the maximum is
. For the or comparison, none of the values is less than , so the maximum is . For the xor comparison, the maximum value less than is

. The function should print:

2
0
2
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.

int i,j;
  int  and_max=0, or_max=0, xor_max=0;
  for(i=1;i<n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          if(((i&j) > and_max) && ((i&j) < k))
          {
              and_max=i&j;
          }
          if(((i|j) > or_max) && ((i|j) < k))
          {
              or_max=i|j;
          }
          if(((i^j) > xor_max) && ((i^j) < k))
          {
              xor_max=i^j;
          }
      }
  }
  printf("%d\n%d\n%d\n",and_max,or_max,xor_max);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

