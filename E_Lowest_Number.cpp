#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int min=INT_MAX;
   int index=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]<min)
    {
      min=arr[i];
      index=i+1;
    }
   }
   cout<<min<<" "<<index;

  return 0;
}