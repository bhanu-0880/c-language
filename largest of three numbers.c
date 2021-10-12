#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("a=%d\nb=%d\nc=%d\n",a,b,c);
	if(c>b)
	{
		printf("largest is c");
	}
	else if(b>a)
	{
		printf("largest is b");
	}
	else
	printf("largest is a");
}
