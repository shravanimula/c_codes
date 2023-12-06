/*
You are given a string str consisting of lower case english alphabets only and an integer K. You have to arrange the k alphabets in ascending order and next k alphabets in descending order and so on as per the following pattern. 
“abcdefghstuvwxyzijklmnopqr”
Note:
The pattern that needs to be followed to arrange the elements in ascending and descending order as “abcdefghstuvwxyzijklmnopqr”

Input format:
The input consists of a two lines:
	The first line contains a string str.
	The second line contains an integer k.
The input will be read from the STDIN by the candidate.

Output Format:
Print the resultant string.
Constraints:
1 <= length of string <= 200
1 <=k <=6

Sample input:
tomcat
2

Output:
*/
#include<stdio.h>
#include<string.h>
#define SIZE 200
int main()
{
	char str[SIZE];
	int k,len=0, asc_len=0, des_len=0;
	printf("enter the string:");
	scanf("%s",str);
	printf("enter the k value:");
	scanf("%d",&k); 
	len=strlen(str);
	int i=0,j;
	while(str[i]!='\0')
	{
		for(;i<des_len+k-1;i++)
		{
			for(j=i+1;j<des_len+k;j++)
			{
				if(str[i] > str[j])
				{
					str[i] = str[i] ^ str[j];
					str[j] = str[i] ^ str[j];
					str[i] = str[i] ^ str[j];
				}
			}
		}
		asc_len = ++i;
		for(i=asc_len;i<k+asc_len-1;i++)
		{
			for(j=i+1;j<k+asc_len;j++)
			{
				if(str[i] < str[j])
				{
					str[i] = str[i] ^ str[j];
					str[j] = str[i] ^ str[j];
					str[i] = str[i] ^ str[j];
				}
			}
		}
		des_len =++i;
	}
	printf("Output string : %s\n", str);
}

