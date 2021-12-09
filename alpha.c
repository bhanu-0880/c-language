#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],t;
	int i,j,len;
	gets(s);
	len=strlen(s);
	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
			
		}
	}
	printf("alphabetical order is %s",s);
}
