#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int*arr=new int[n];

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int mxm=arr[0];
   for(int i=0;i<n;i++){
     mxm=max(arr[i],mxm);
   }
   printf("%d",mxm);
   
   return 0;
}