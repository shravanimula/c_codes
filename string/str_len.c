#include<stdio.h>
#define SIZE 50
int main()
{
	char str[SIZE];
	printf("enter the string:");
	scanf("%[^\n]s",str);
	int cnt=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		cnt++;
	}
	printf("length of the string is:%d\n",cnt);
}
