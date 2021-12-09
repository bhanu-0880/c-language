#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],ss[100];
	int len,i,j,l;
	gets(s);
	printf("enter the length");
	scanf("%d",&l);
	len=strlen(s);
	j=len-l;
	while(i<len)
	{
		ss[i]=s[j];
		i++;
		j++;
    }
    ss[i]='\0';
	puts(ss);
}
