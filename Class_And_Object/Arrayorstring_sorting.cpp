#include<bits/stdc++.h>
using namespace std;
int main()
{
   string sm;
   while(getline(cin,sm)){
       int freq[26]={0};
   for(int i=0;i<sm.length();i++)
   {
      freq[sm[i]-'a']++;
   }
   for(int i=0;i<26;i++){
    if(freq[i]>0){
      for(int j=0;j<freq[i];j++)
      {
         // cout<<freq[i]<<" ";
      cout<<char(i+'a')<<" ";
      }
      
    }
   }
   }
  

  return 0;
}