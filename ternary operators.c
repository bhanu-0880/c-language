//conditional or terinary operator
// ?:
// expression?true:false
#include<stdio.h>
int main()
{
	int a,b,res;
	scanf("%d%d",&a,&b);
	(a>b)?printf("largest=%d",a):printf("largest=%d",b);
}
