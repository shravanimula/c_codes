//mymemcopy
#include<stdio.h>
#include<string.h>
void mymemcpy(void *dest,void *src,int n)
{
	char *d=(char *)dest;
	char *s=(char *)src;
	for(int i=0;i<n;i++)
	{
		d[i]=s[i];
	}
	puts(d);
	printf("length of the destination string:%ld\n",strlen(d));
}	
int main()
{
	char s1[20],s2[20];
	printf("enter the string1:");
	scanf("%s",s1);
	printf("length of string1=%ld\n",strlen(s1));
	mymemcpy(s2,s1,strlen(s1)+1);
}
