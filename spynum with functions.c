#include<stdio.h>
int spynum(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=spynum(n);
	printf("%d",res);
	if(n==res)
	{
		printf("spynum");
	}
	else
	printf("not spynum");
}
int spynum(int n)
{
	int sq,r,sum=0;
	sq=n*n;
	while(sq!=0)
	{
		r=sq%10;
		sum=sum+r;
		sq=sq/10;
	}
	return sum;
}
