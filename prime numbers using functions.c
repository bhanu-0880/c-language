#include<stdio.h>
int factorcount(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=factorcount(n);
    if(res==1)
    {
    	printf("it is a prime number");
	}
	else
	printf("it is not a prime number");
}
int factorcount(int n)
{
	int i,fact=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
