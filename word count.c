#include<stdio.h>
#include<string.h>
void main()
{
	char str[30];
	int len,count=1,i;
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]==' ')
	{
		count++;
	}
	if(str[i]=='\n')
	{
		count++;
	}
	if(str[i]=='\t')
	{
		count++;
	}
	i++;
	}
	printf("%d",count);
}
