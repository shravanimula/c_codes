//convert thr machine little to bug endian
#include<stdio.h>
int little_big(int a)
{
	return (((a >> 24) & (0x000000ff)) | ((a >> 8) & (0x0000ff00)) | (( a << 8) & (0x00ff0000)) | (( a << 24) & (0xff000000)));
}


int main()
{
	int i=0x12345678;
	int result;
	printf("liitle endian:0x%X\n",i);
	result=little_big(i);
	printf("big endian:0x%X\n",result);
}
