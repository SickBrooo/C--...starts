#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    string s;
  cin>>s;
  int ret1=s.find("010"); 
  int ret2=s.find("101");
  
  if(ret1>=0||ret2>=0)
  {
    cout<<"Good"<<endl;
  }
  else
  {
    cout<<"Bad"<<endl;
  }
  }
  
  return 0;
}