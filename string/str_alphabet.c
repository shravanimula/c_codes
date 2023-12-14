/*Accept any string from user.remove all special characters, numbers and print alphabets from the given string*/
#include<stdio.h>
#include<string.h>
#define SIZE 50
void str_alphabet(char *s)
{
	int i,len=0;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>= 'a' && s[i] <= 'z')
		{
			printf("%c",s[i]);
		}
	}
}

int main()
{
	char str[SIZE];
	printf("enter the string:");
	scanf("%[^\n]s",str);
	str_alphabet(str);
}
