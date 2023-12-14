/*reverse the words in a string */

#include<stdio.h>
#include<string.h>
#define SIZE 50
void reverse_word(char *s)
{
	int i,j,len=0,startindex,endindex;
	len=strlen(s);
	endindex=len-1;
	for(i=endindex;i>=0;i--)
	{
		if((*(s+i)) == ' ' || i == 0)
		{
			if(i == 0)
			{
				startindex=0;
			}
			else
			{
				startindex=i+1;
			}
			for(j=startindex;j<=endindex;j++)
			{
				printf("%c",*(s+j));
			}
			endindex=i-1;
			printf(" ");
		}
	}
}



int main()
{
	char str[SIZE];
	printf("enter the string:");
	scanf("%[^\n]s",str);
	reverse_word(str);
}
