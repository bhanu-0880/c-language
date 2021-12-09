#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	int len1=0,len2=0,i=0,flag=0;
	gets(s1);
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1==len2)
	{
		while(i<len1)
		{
			if(s1[i]==s2[i])
			{
				i++;
			}
			else
			{
				break;
			}
		}
		if(i==len1)
		{
			flag=1;
			printf("equal");
		}
	}
	if(len1!=len2)
	{
		printf("not equal \t");
	}
	if(flag==0)
	{
		if(s1[i]>s2[i])
		{
			printf("string1 bigger");
		}
		else if(s1[i]<s2[i])
		{
			printf("string2 bigger");
		}
	}
}
