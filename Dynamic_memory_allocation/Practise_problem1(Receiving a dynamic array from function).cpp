#include<bits/stdc++.h>
using namespace std;
int* get_array(int N)
{
  int* Arr=new int[N];
  for(int i=0;i<N;i++)
  {
    cin>>Arr[i];
  }
  return Arr;
}
int main()
{
   int N;
   cin>>N;
   int* P=get_array(N);
   for(int i=0;i<N;i++)
   {
    cout<<P[i]<<",";
   }

  return 0;
}