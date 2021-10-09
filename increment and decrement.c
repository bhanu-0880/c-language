#include<stdio.h>
int main()
{
	int a=10,b;
	printf("a=%d\n",a);
	printf("b=%d\n",b=++a);	
	printf("b=%d\n",b=a++);	
	printf("b=%d\n",b=--a);	
	printf("b=%d\n",b=a--);	
}
