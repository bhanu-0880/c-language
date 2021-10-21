#include<stdio.h>
int main()
{
	int i,n=100,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count=count+1;
		}
    }
    if(count==2)
    {
    	printf("prime number");
	}
	else
	printf("not a prime number");
}
