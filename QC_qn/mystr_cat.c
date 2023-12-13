#include<stdio.h>
#define SIZE 50
void mystr_cat(char dest[],const char src[])
{
	int i=0,j;
	while(dest[i]!='\0')
	{
		i++;
	}
	for(j=0;src[j]!='\0';j++)
	{
		dest[i++]=src[j];
	}
	dest[i]='\0';
	printf("after strcat s1=%s\t s2=%s\n",dest,src);
}

int main()
{
	char s1[SIZE],s2[SIZE];
	printf("enter the string1:");
	scanf("%[^\n]s",s1);
	printf("enter the string2:");
	scanf(" %[^\n]s",s2);
	printf("before strcat s1=%s\t s2=%s\n",s1,s2);
	mystr_cat(s1,s2);
}
