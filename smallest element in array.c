#include <stdio.h>
void main()
 {
  int n, arr[100],i,position;
  scanf("%d",&n);

  for (i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
  for (i=1;i<n;i++)
   {
    if (arr[0]>arr[i]) 
	{
      arr[0]=arr[i];
      position=i;
    }
  }
  printf("smallest element is %d\n", arr[0]);
  printf("position is %d",position);
}

