#include<stdio.h>
int main()
{
	int n,res,rev;
	scanf("%d",&n);
	res=factor_count(n);
	if(res==2)
	{
		printf("prime");
		rev=reverse(res);
		if(rev==2)
		{
			printf("circular");
		}
		else
		{
	    	printf("not circular prime");
		}
		
	}
	else
	printf("not prime");
}
int factor_count(int n)
{
int i,count=0;
for(i=1;i<=n;i++)
{
	count++;
}
return count;
}
