#include<stdio.h>
#include<string.h>

int main()
{
  char str[21];
  char str1[21];
  scanf("%s %s",&str,&str1);
  int val=strcmp(str,str1);
  if(val<0)
  {
    printf("%s\n",str);
  }
  else if(val==0)
  {
    printf("%s\n",str);
  }
  else if(val>0)
  {
    printf("%s\n",str1);
  }
  return 0;
}