#include<stdio.h>
#define SIZE 50
void mystr_cpy(char dest[],const char src[])
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
	printf("src=%s\t dest=%s\n",src,dest);
}

int main()
{
	char s1[SIZE],s2[SIZE];
	printf("enter the s1:");
	scanf("%[^\n]s",s1);
	mystr_cpy(s2,s1);
}
