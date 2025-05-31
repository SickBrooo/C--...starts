#include<bits/stdc++.h>
using namespace std;
int main()
{
  int* A=new int [5];
  for(int i=0;i<5;i++){
    cin>>A[i];
  }
  A[2]=600;
  for(int i=0;i<5;i++){
    cout<<A[i]<<" ";
  }
}