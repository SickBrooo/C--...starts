#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  string name;
  int clas;
  char sec;
  int id;
  int math_marks;
  int eng_marks;
};
bool comp(Student l,Student r)
{
  if(l.eng_marks>r.eng_marks)
  {
    return true;
  }
  else if(l.eng_marks<r.eng_marks)
  {
    return false;
  }
  else
  {
    if(l.math_marks>r.math_marks)
    {
       return true;
    }
    else if(l.math_marks<r.math_marks)
    {
      return false;
    }
    else
    {
      return l.id<r.id;
    }
  }
}
int main()
{
   int n;
   cin>>n;
   Student arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i].name>>arr[i].clas>>arr[i].sec>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
   }
   sort(arr,arr+n,comp);
   for(int i=0;i<n;i++)
   {
    cout<<arr[i].name<<" "<<arr[i].clas<<" "<<arr[i].sec<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;
   }

  return 0;
}