#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=2;i<=n;i++)
   {
      for(int j=2;j<=i;j++)
      {
        if(i%j==0)
        {
           printf("%d",j);
        }
      }
   }

  return 0;
}