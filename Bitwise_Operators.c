#include<stdio.h>
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
   int maxand=0;
  for(int i=1;i<=k;i++)
  {
    for(int j=i+1;j<=n;j++)
      {
      maxand=i&j;
      }  
  }
  printf("%d",maxand);
  return 0;
}