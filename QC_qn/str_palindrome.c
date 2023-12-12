#include<stdio.h>
#define SIZE 50
void str_palindrome(char s[])
{
	int i,j,len=0,flag=0;
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
		else
			flag=0;
	}
	if(flag==1)
		printf("%s is not palindrome\n",s);
	else
		printf("%s is palindrome\n",s);

}

int main()
{
	char str[SIZE];
	printf("enter the string:");
	scanf("%s",str);
	str_palindrome(str);
}
