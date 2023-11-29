/*
Input Format

The input will contain two integers,
and

, separated by a newline.

Output Format

Modify the two values in place and the code stub main() will print their values.

Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.

Sample Input

4
5

Sample Output

9
1
*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int temp;
    temp=*a;
    *a=*a + *b;
    if ( *b > temp)
    {
        *b=*b-temp;
    }
    else {
        *b=temp - *b;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

