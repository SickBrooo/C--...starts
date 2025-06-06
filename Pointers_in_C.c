#include<stdio.h>
#include<stdlib.h>
void update(int *a,int *b,int x,int y)
{
   *a=x+y;
   *b=abs(x-y);
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int *pta=&a;
  int *ptb=&b;
  update(pta,ptb,a,b);
  printf("%d\n%d",a,b);

  return 0;
}