#include<stdio.h>
#define SIZE 50
void  mystrstr(char *str,char *substr)
{
	int i,j,flag;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==substr[0])
		{
			for(j=1;substr[j]!='\0';j++)
			{
				if(str[i+j]==substr[j])
				{
					flag=0;
				}
				else
				{
					flag=1;
					break;
				}
			}
		}
	}
	if(flag==1)
		printf("substring is not found\n");
	else
		printf("substring is found\n");
}

int main()
{
	char str1[SIZE],str2[SIZE];
	printf("enter the string1:");
	scanf("%[^\n]s",str1);
	printf("enter the sub string:");
	scanf("%s",str2);
	mystrstr(str1,str2);
}
