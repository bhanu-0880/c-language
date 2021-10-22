#include<stdio.h>
int main()
{
	int a,b,i,f;
	scanf("%d%d",&a,&b);
	printf("prime numbers between a and b");
	while(a<b)
	{
		f=0;
		if(a<=1)
		{
			++a;
			continue;
		}
		for(i=1;i<=a/2;i++)
		{
			if(a%i==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			printf("%d",a);
			++a;
		}
	}
}
