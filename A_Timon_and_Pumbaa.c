#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  int res;
  res=a-b;
  if(res>=0)
  {
    printf("%d",res);
  }
  else
  {
    printf("0");
  }
}