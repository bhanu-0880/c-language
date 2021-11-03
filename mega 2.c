#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(prime(n))
	{
		printf("prime\n");
		if(ismegaprime(n)==1)
		{
			printf("mega prime");
		}
		else
		{
			printf("not mega prime");
		}
	}
	else
	{
		printf("not prime");
	}
	
}
int prime(int n)
{
int i;
for(i=2;i<n;i++)
{
	if(n%i==0)
	{
		return 0;
	}
}
return 1;
}
int ismegaprime(int n)
{
	while(n!=0)
	{
		if(prime(n%10)==0)
		{
			return 0;
		}
		n=n/10;
	}
	return 1;
}
