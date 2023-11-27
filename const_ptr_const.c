#include<stdio.h>
int main()
{
	int i=10,j=20;
	const int *const ptr=&i;
	printf("%d\n",*ptr);
//	ptr=&j; read -only memory
	printf("%d\n",*ptr);
//	*ptr=100; read-only memory
	printf("%d\n",*ptr);
}

