//constant pointer
#include<stdio.h>
int main()
{
	int i=10,j=20;
	int *const ptr=&i;
	printf("%d\n",*ptr);
	*ptr=100;
	printf("%d\n",*ptr);
	//ptr=&j; //read-only memory
	printf("%d\n",*ptr);
}
