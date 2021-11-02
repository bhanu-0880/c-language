#include<stdio.h>
int main()
{
	int n,rev,fc=0;
	scanf("%d",&n);
	fc=factorcount(n);
    if(fc==2)
    {
    	printf("it is a prime number\n");
    	rev=reverse(n);
    	fc=factorcount(rev);
    	if(fc==2)
    	{
    		printf("circular prime");
		}
		else
		{
		printf("not a circular"); 	
	    }
	}
	else
	{
	printf("it is not a prime number");
	}
}
int factorcount(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	return count;
}
int reverse(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}

