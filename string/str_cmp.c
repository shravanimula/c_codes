#include<stdio.h>
#define SIZE 50
void mystr_cmp(char const s1[],char const s2[])
{
	int i=0,j=0,flag;
	while(s1[i]!='\0' && s2[j]!='\0')
	{
		if(s1[i]==s2[j])
		{
			flag=0;
		}
		else
		{
			flag=1;
			break;
		}
		i++;
		j++;
	}
	if(flag==0)
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
}

int main()
{
	char s1[SIZE],s2[SIZE];
	printf("enter the string1:");
	scanf("%[^\n]s",s1);
	printf("enter the string2:");
	scanf(" %[^\n]s",s2);
	printf("s1=%s\t s2=%s\n",s1,s2);
	mystr_cmp(s1,s2);
}
