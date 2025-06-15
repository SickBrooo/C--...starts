#include<bits/stdc++.h>
using namespace std;
int main()
{
   int p,q;
   cin>>p>>q;
   int big=0;
   if(p>q){big=p;}
   else{big=q;}
   int greatcnt=0;
   for(int i=1,j=1;i<=big;i++,j++)
   {
       if(p%i==0&&q%j==0)
       {
          greatcnt=i;
       }
    }
    cout<<greatcnt;
  return 0;
}