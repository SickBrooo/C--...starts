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
   int length=s.size();
   if(length>10)
   {
    char x=*s.begin();
    char y=*(s.end()-1);
    cout<<x<<length-2<<y<<endl;
  }
  else{
    cout<<s<<endl;

  }


  }
return 0;
}