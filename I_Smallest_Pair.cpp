#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
     int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int sum=0;
   int smallest=arr[0]+arr[1]+1;
   int low=0;
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
     sum= arr[i]+arr[j]+(j-i);
     smallest=min(smallest,sum);
     low=smallest;
    }
   }
   cout<<low<<endl;
  }
   


  return 0;
}