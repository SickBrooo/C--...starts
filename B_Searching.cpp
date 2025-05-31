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
   int x;
   cin>>x;
   int flag=0;
   int index=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]==x){
      index=i;
      flag=1;
      break;
    }
   }
   if(flag==1){
    printf("%d",index);
   }
   else{
    printf("-1");
   }
 
  return 0;
}