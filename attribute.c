#include<stdio.h>
struct st{
	int data1;
	char name;
	int data2;
}__attribute__((packed));
int main()
{
	struct st s1;
	printf("the size of structure is:%ld\n",sizeof(s1));
}

