/*find the longest word in a given string */
#include<stdio.h>
#include<string.h>
#define SIZE 50
void longest_word(char *s)
{
	char word[20];
	int len=0,i,j,cnt=0,max=0,index=0;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(*(s+i)!=' ')
		{
			cnt++;
		}
		else
		{
			if(cnt > max)
			{
				max=cnt;
				index=i-max;
			}
			cnt=0;
		}
	}
	if(cnt > max) /*checking last word */
	{
		max=cnt;
		index=len-max;
	}
	j=0;
	for(i=index;i<index+max;i++)
	{
		word[j]=*(s+i);
		j++;
	}
	word[j]='\0';
	printf("longest wordis:%s\n",word);
}

int main()
{
	char str[SIZE];
	printf("enter the string:");
	scanf("%[^\n]s",str);
	longest_word(str);
}
