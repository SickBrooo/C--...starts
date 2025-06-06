#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;cin>>s;
   string t;cin>>t;
   cout<<s.size()<<" "<<t.size()<<endl;
   string connect=s+t;
   cout<<connect<<endl;
   string p;
   p[0]=s[0];
   s[0]=t[0];
   t[0]=p[0];
   cout<<s<<" "<<t<<endl;

   

  return 0;
}