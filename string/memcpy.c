#include<stdio.h>
#define SIZE 50

void mymemcpy(void *dest,void *src,int n)
{
	char *d=(char *)dest;
	char *s=(char *)src;
	for(int i=0;i<n;i++)
	{
		d[i]=s[i];
	}
	printf("the desination of string:%s\n",d);
}
int main()
{
	char s1[SIZE],s2[SIZE];
	printf("enter the string1:");
	scanf("%s",s1);
	mymemcpy(s2,s1,sizeof(s1));
}

