#include<stdio.h>
#define mysize(type) (char *) (&type+1) - (char *)(&type)
int main()
{
	char letter='a';
	int a=10;
	printf("%ld\n",mysize(letter));
	printf("%ld\n",mysize(a));
}
