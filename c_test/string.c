/*
statement : s1 contains all ' infinite a's'
      s2 contains all 'infinite b's'
      speacial string = s1+s2
      user input : n no.of special strings 
     we need to printf the count of the special strings which contains s1+s2 
    ex: n=5
          aaabbb
          aaaaaaabb 
          ab
          bbbbbbb
          aaaaaaa
     final output :3
     */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int b_check=0,b_cnt=0 ,a_check=0;
	int i,n,cnt=0,j;
	printf("enter the no.of special strings:");
	scanf("%d",&n);
	char *arr[n]; 
	for(i=0;i<n;i++)
	{
		arr[i]=calloc(1,100*sizeof(char));
		printf("Enter string:");
		scanf("%s", arr[i]);
	//	printf("%p\n",arr[i]);
	//	printf("%p",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		
		if(arr[i][0]=='a')
		{	
			j=1;
			a_check=1;
			//printf("%s\n",arr[i]);
			//printf("\n\narr[%d]=%c\n",i,arr[i][0]);
			while(arr[i][j]!='\0')
			{
				if(arr[i][j] == 'a')
				{			
		//			printf("%c\t , j=%d\n",arr[i][j], j);
					if(b_check == 1)
						break;
				}
				else if(arr[i][j]=='b')
				{
		//			printf("%c\t, j=%d\n",arr[i][j], j);
					b_cnt++;
					if(b_cnt == 1)
						b_check++;
				}
				else
				{
		//			printf("%c\t, j=%d\n",arr[i][j], j);
					break;
				}
				j++;
			}
		}
	//	printf("b_check=%d\t a_check=%d\t b_cnt=%d\t arr[i][j]=%c\n",b_check,a_check,b_cnt,arr[i][j]);
		if(b_check == 1 && arr[i][j]=='\0' && a_check == 1)
		{
			++cnt;
	//		printf("\nInside cnt increment if condition : %d\n", cnt);
			
		}
		a_check = b_check =  b_cnt = 0;
	}

	printf("\n\n%d\n",cnt);
}

