#include<stdio.h>
#pragma pack(1)
struct st{
	int data1;
	char name;
	double d;
	int data2;
};
int main()
{
	struct st s1;
	printf("size os structure:%ld\n",sizeof(s1));
}

