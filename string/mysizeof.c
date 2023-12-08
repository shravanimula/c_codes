#include<stdio.h>
#define mysizeof(type)  (char *)(&type+1) - (char *)(&type)

int main()
{
	int a=10;
	char ch='a';
	printf("sizeof character is:%ld\n",mysizeof(ch));
	printf("sizeof integer is:%ld\n",mysizeof(a));
}
