#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("a=%d\n",a);
	if(a%5==0 && a%7==0)
	{
		printf("divisible by 5 and 7");
	}
	else
	printf("not divisible");
}
