#include<stdio.h>
#include<stdio.h>
void main()
{
	char str[100],str1[100],i;
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
	
	printf("the copied string is %c",str1);
}
