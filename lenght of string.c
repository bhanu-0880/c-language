#include<stdio.h>
#include<string.h>
void main()
{
	char name[10],i;
	int length;
	printf("enter the name: ");
	scanf("%[^\n]s",&name);
	for(i=0;name[i]!='\0';i++)
	{
	length++;
	}
	length=i;
	printf("the length of name is %d",length);
}
