#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;cin>>n;
   long long int arr[n];
     long long int evencnt=0;
    long long int oddcnt=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      {
        evencnt++;
      }
      else
      {
        oddcnt++;
      }
    }
    int value=n/2;

    if(n%2==1)
    {
      cout<<"-1"<<endl;
    }
    else
    {
      int ans;
      ans = abs(value-oddcnt);
      cout<<ans<<endl;

    }  
     
   
  }
    
}
