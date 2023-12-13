#include<stdio.h>
int main()
{
	int a=1;
	char *ptr=(char *) &a;
	if(*ptr == 1)
	{
		printf("machine is little endian\n");
	}
	else
		printf("machine is big endian\n");
}
