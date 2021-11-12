#include<stdio.h>
int main()
{
	int a[3]={46,45,56},i;
	for(i=0;i<2;i++)
	{
        if(a[2]>a[0] && a[2]>a[1])
        {
       		printf("a[%d]=%d is largest\n",i,a[i]);
		}
		else if (a[1]>a[0])
		{
       		printf("a[%d]=%d is largest\n",i,a[i]);	
		}
		else
   		printf("a[%d]=%d is largest\n",i,a[i]);

	}
    		
}
