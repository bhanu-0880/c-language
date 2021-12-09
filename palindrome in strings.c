#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int len,i;
	gets(s);
	for(i=0;i<(len/2);i++)
	{
		if(s[i]!=s[len-1-i])
		{
			break;
		}
	}
	if(i==len/2)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a plaindrome");
	}
}
