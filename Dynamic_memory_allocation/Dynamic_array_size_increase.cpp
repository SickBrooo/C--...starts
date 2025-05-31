#include<bits/stdc++.h>
using namespace std;
int main()
{
 int *p=new int[5];
 for(int i=0;i<5;i++){
   cin>>p[i];
 }
 int *q=new int[7];
 q[5]=6;
 q[6]=7;
 for(int i=0;i<5;i++){
    q[i]=p[i];
 }
 delete[]p;
 for(int i=0;i<7;i++){
  cout<<q[i]<<" ";
 }
}