#include<stdio.h>
int main()
{
	const int *ptr;
	int i=10,j=20;
	ptr=&i;
	printf("%d\n",*ptr);
//	*ptr=100; //read-only memory
	printf("%d\n",*ptr);
	ptr=&j;
	printf("%d\n",*ptr);
}
