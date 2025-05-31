#include<bits/stdc++.h>
using namespace std;
int *address(){
  int *A=new int[5];
  for(int i=0;i<5;i++){
    cin>>A[i];
  }
  return A;
}
int main()
{
   int * arr=address();
   for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
   }
   return 0;
}