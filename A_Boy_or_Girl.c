#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  scanf("%s",str);
  int length=strlen(str);
  int freq[26]={0};
  for(int i=0;i<length;i++)
  {
    freq[str[i]-'a']++;
  }
  int count=0;
  for(int i=0;i<26;i++)
  {
    if(freq[i]>0)
    {
       count++;
    }
  }
  if(count%2==0)
  {
    printf("CHAT WITH HER!");
  }
  else{
    printf("IGNORE HIM!");
  }
  

}