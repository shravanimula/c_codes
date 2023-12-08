#include<stdio.h>
#define SIZE 50
void mystr_rev(char s[])
{
	int i,j,len=0;
	for(i=0;s[i]!='\0';i++)
		len++;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		s[i]=s[i] ^ s[j];
		s[j]=s[i] ^ s[j];
		s[i]=s[i] ^ s[j];
	}
	printf("after reverse the string is:%s\n",s);
}
int main()
{
	char str[SIZE];
	printf("enter the string:");
	scanf("%[^\n]s",str);
	printf("before reverse the string:%s\n",str);
	mystr_rev(str);
}
