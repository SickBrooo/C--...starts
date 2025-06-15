#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[3];
  for(int i=0;i<3;i++)
  {
    cin>>arr[i];
  }
  int arrr[3];
  for(int i=0;i<3;i++)
  {
    arrr[i]=arr[i];
  }
  sort(arr,arr+3);
  for(int i=0;i<3;i++)
  {
    cout<<arr[i]<<endl;
  }
  cout<<endl;
  for(int i=0;i<3;i++)
  {
    cout<<arrr[i]<<endl;
  }

  return 0;
}