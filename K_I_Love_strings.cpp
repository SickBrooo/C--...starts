#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;cin>>T;
  for(int i=0;i<T;i++)
  {
      string s;
   cin>>s;
   string t;
   cin>>t;
   int length=s.size();
   int length2=t.size();
   int al=0;
   if(length>length2)
   {
    al=length2;
  }
   else
   {
    al=length;
   }
   
   for(int i=0;i<al;i++)
   {
    cout<<s[i]<<t[i];
   }
   
   if(length>length2){
    string p(s,length2);
    cout<<p;
   }
   else if(length2>length)
   {
    string q(t,length);
    cout<<q;
   }
   cout<<endl;

  }

  return 0;
}