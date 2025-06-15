#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j;
   cin>>i>>j;
   if(i>0&&j>0)
   {
    int sum=0;
     if(i>j)
     {
      for(int p=j;p<=i;p++)
      {
        
        printf("%d ",p);
        sum=sum+p;
      }
     }
     else if(i<j)
     {
       for(int p=i;p<=j;p++)
       {
        
        printf("%d ",p);
        sum=sum+p;
       }
     }
     printf("sum =%d",sum);
     printf("\n");
   }
   while(i>0&&j>0)
   {
    return main();
   }


  return 0;
}