#include<stdio.h>
int main()
{
	int a,r,t,s,l,h;
	scanf("%d%d%d",&s,&l,&h);
	printf("s=%d l=%d h=%d\n",s,l,h);
	a=s*s;
	r=l*h;
	t=l*h/2;
	printf("a=%d\nr=%d\nt=%d\n",a,r,t);	
}
