#include<stdio.h>
#include<string.h>
int main()
{
  char str[10000];
   while (fgets(str,10000,stdin))
   {
      int length=strlen(str);
      int freq[26]={0};
      for(int i=0;i<length;i++){
        freq[str[i]-'a']++;
      }
      for(int i=0;i<26;i++)
      {
        if(freq[i]>0)
        {
          for(int j=0;j<freq[i];j++){
             printf("%c",i+'a');
          }
          
        }
      }

      printf("\n");
   }
   
}