#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   string s1;
   cin>>s>>s1;
   int res=s.compare(s1);
   if(res==-1)
   {
    cout<<s<<endl;
   }
   else if(res==0)
   {
    cout<<s<<endl;
   }
   else if(res>0)
   {
    cout<<s1<<endl;
     }
   

  return 0;
}