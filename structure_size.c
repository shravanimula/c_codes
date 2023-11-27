#include<stdio.h>
struct st{
	int data1;
	char name;
	double d;
	int data2;
};
int main()
{
	struct st s1;
	printf("the size of structure is:%ld\n",sizeof(s1));
}
