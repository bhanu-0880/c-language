#include <stdio.h>
 
int main()
{
    
    int a, b, i, j, f;
    scanf("%d%d",&a,&b);
    printf("\nPrime numbers between %d and %d are:\n ", a, b);
    for (i = a; i <= b; i++) 
	{
        if (i == 1 || i == 0)
            continue;
        f = 1;
        for (j = 2; j <= i / 2; ++j)
		 {
            if (i % j == 0) 
			{
                f = 0;
                break;
            }
        }
        if (f == 1)
            printf("%d ", i);
    }
 
    return 0;
}
