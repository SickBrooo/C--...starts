#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  for(int i=0;i<T;i++){
     int n;cin>>n;
   int sum;cin>>sum;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
  int flag=0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        int total=0;
        total=arr[i]+arr[j]+arr[k];
        if(total==sum){
           flag=1;
           break;
        }
      }
    }
   }
   if(flag==1)
   {
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
   cout<<endl;
  }
   
  return 0;
}