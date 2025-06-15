#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  string name;
  int cls;
  char sec;
  int id;
  int math_marks;
  int eng_marks;
};
bool comp(Student left,Student right)
{

  if(left.math_marks+left.eng_marks>right.math_marks+right.eng_marks)
  {
    return true;
  }
  else if(left.math_marks+left.eng_marks<right.math_marks+right.eng_marks)
  {
    return false;
  }
  else
  {
    return left.id<right.id;
  }
}
int main()
{
   int n;
   cin>>n;
   Student arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i].name>>arr[i].cls>>arr[i].sec>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
   }
   sort(arr,arr+n,comp);
   for(int i=0;i<n;i++)
   {
    cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].sec<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;
   }

  return 0;
}