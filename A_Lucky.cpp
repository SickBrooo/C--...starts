#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;cin>>T;
   for(int i=0;i<T;i++)
   {
   string s;
   cin>>s;
   int sum1=0;
   int sum2=0;
   for(int i=0,j=3;i<3;i++,j++)
   {
     sum1=sum1+s[i];
     sum2=sum2+s[j];
   }
   if(sum1==sum2)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
   }
  
  return 0;
}