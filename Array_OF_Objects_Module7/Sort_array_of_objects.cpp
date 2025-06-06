#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   string name;
   int marks;
   int roll;
};
 bool comp(Student l,Student r)
 {
   if(l.marks>r.marks)
   {
     return true;
   }
   else if(l.marks<r.marks)
   {
      return false;
   }
   else {
    if(l.roll<r.roll)
     {
      return true;
     }
     else
     {
      return false;
     }
   }
  // return l.marks>r.marks;
 }

int main()
{
  int n;
  cin>>n;
  Student a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i].name>>a[i].marks>>a[i].roll;
  }
  sort(a,a+n,comp);
  for(int i=0;i<n;i++)
  {
    cout<<a[i].name<<" "<<a[i].marks<<" "<<a[i].roll<<endl;
  }
    

  return 0;
}