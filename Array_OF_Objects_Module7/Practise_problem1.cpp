#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  string name;
  int roll;
  int marks;
};
bool comp(Student L,Student R)
{
  if(L.marks>R.marks)
  {
    return true;
  }
  else if(L.marks<R.marks)
  {
    return false;
  }
  else
  {
   
    return L.roll<R.roll ? true:false;
  }
}

int main()
{
  int n;
  cin>>n;
  Student arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
  }   
  sort(arr,arr+n,comp);
  
  for(int i=0;i<n;i++)
  {
    cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
  }

  return 0;
}