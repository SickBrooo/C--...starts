#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int p,q;
   cin>>p>>q;
   int sumtotal=0;
   for(int i=1;i<=n;i++)
   {
     int count=i;
     int sumdigit=0;
     while(count!=0)
     {
         int digit=0;
         digit =count%10;
         count=count/10;
         sumdigit=sumdigit+digit;
     }
     if(sumdigit<=q&&sumdigit>=p)
     {
       sumtotal=sumtotal+i;
     }
    }
   cout<<sumtotal<<endl;
  return 0;
}