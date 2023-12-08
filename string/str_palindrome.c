#include<stdio.h>
#define SIZE 50
void str_palindrome(char s[])
{
	int len=0,i,j,flag=0;
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	for(i=0,j=len-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("string is not palindrome\n");
	else
		printf("string is palindrome\n");
}

int main()
{
	char str[SIZE];
	printf("enter the string:");
	scanf("%[^\n]s",str);
	str_palindrome(str);
}
