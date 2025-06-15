#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   long long val1=pow(a,b);
   long long val2=pow(c,d);
   if(val1>val2)
   {
    cout<<"YES";
   }
   else if(val1<val2)
   {
    cout<<"NO";
   }
   else
   {
    cout<<"NO";
   }

  return 0;
}