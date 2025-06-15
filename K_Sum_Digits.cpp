#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%1d",&arr[i]); 
   }
  
   int sum=0;
    for(int i=0;i<n;i++)
   {
     sum=sum+arr[i];
   }
   printf("%d",sum);

  return 0;
}