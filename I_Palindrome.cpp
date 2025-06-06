#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  char arr[s.size()];
  for(int i=0;i<s.size();i++)
  {
     arr[i]=s[i];
  }
  reverse(s.begin(),(s.end()));
  int flag=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]==arr[i]){
      flag++;
    }

  }
  if(flag==s.size())
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO";
  }
  

  return 0;
}