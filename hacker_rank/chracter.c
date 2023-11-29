/*
Task

You have to print the character,ch, in the first line. Then print s  in next line. In the last line print the sentence, sen
Input Format

First, take a character,ch as input.
Then take the string,s as input.
Lastly, take the sentence sen as input.

Constraints

Strings for s and sen will have fewer than 100 characters, including the newline.
Output Format

Print three lines of output. The first line prints the character,ch
.
The second line prints the string, s.
The third line prints the sentence,sen.

Sample Input 0

C
Language
Welcome To C!!

Sample Output 0

C
Language
Welcome To C!!

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 50

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch,s[MAX_LEN],sen[MAX_LEN];

    scanf("%c",&ch);
    scanf("%s",&s);
    getchar();
    scanf("%[^\n]s",&sen);
    printf("%c\n%s\n%s\n",ch,s,sen);
    return 0;
}

