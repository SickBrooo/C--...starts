#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  for(int i=0;i<T;i++)
  {
      string s;
   cin>>s;
   string t;
   cin>>t;
   int size=t.size();
   int index=s.find(t);
   while(index!=-1)
   {
    s.replace(index,size,"#");
    index=s.find(t);
   }
   cout<<s<<endl;
  }
   return 0;
}