#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
   int x=0;
   int y=1;int z=1;
  for(int i=0;i<n;i++)
  {
    if(i==0)
    {
      printf("%d ",x);
    }
    else
    {
          printf("%d ",z);
   z=x+y;
   x=y;
   y=z;
    }
 

  }
  return 0;
}