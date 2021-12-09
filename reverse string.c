#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],i;
	int len;
	scanf("%[^\n]s",&str);
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
