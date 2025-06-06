#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
  int roll;
  string name;
  char sec;
  int marks;
};
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
       Student topper;
   for(int i=1;i<=3;i++)
   {
    Student tem;
    cin>>tem.roll>>tem.name>>tem.sec>>tem.marks;
    if(i==1)
    {
      topper=tem;
    }
    else{
      if(tem.marks>topper.marks){
        topper=tem;
      }
      else if(tem.marks==topper.marks){
        if(tem.roll<topper.roll){
          topper=tem;
        }
      }
    }
   }
   cout<<topper.roll<<" "<<topper.name<<" "<<topper.sec<<" "<<topper.marks<<endl;
  }
   

  return 0;
}