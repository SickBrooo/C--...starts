#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   stringstream ss(s);
   string word;
   string x={"Jessica"};
   int flag=0;
   while(ss>>word)
   {
    if(word==x)
    {
      flag=1;
    }
   }
   if(flag==1)
   {
    printf("YES");
   }
   else
   {
    printf("NO");
   }
   

  return 0;
}