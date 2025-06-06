#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   stringstream ss(s);
   string x;
   cin>>x;
   string y;
   int count=0;
   while(ss>>y)
   {
    if(y==x)
    {
      count ++;
    }
   }
  
  cout<<count;

  return 0;
}