#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
  char x;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    cout<<x<<" ";
  }
}
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
     int n;
     cin>>n;
     print(n);
     cout<<endl;
   }

  return 0;
}