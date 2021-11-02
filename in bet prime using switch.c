#include<stdio.h>
int main()
{
	int i,n,res;
	scanf("%d",&n);
	for(i=10;i<n;i++)
	{
		if(inprime(i))
		{
			printf("%d\t",i);
		}
	}
}
int inprime(int n)
{
	int i;
	for(i=10;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
