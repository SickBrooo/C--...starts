#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++)
   {
    cin>>A[i];
   }
   for(int i=0;i<n;i++)
   {
    if(A[i]<=10)
    {
      printf("A[%d] = %d\n",i,A[i]);
    }
   }

  return 0;
}