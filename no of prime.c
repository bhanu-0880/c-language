#include<stdio.h>
int main()
{
	int n,j,i,factor=0;
	printf("enter a number\t");
	scanf("%d",&n);
	printf("prime numbers are:\n");
	for(i=1;i<=n;i++)
	{
		factor=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			factor++;
	    	}
		}
		if(factor==2)
		{
			printf("%d\t",i);
		}
	}
}
