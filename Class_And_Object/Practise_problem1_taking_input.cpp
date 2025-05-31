#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   string name;
   int roll;
	 char section;
	 int math_marks;
	 int cls;

  //  Student(string name,int roll,char section,int math_marks,int cls)
  //  {
  //     this->name= name;
  //     this->roll=roll;
  //     this->section=section;
  //     this->math_marks=math_marks;
  //     this->cls=cls;
  //  }

};
int main()
{
   int n;
   cin>>n;
   Student topper;
   
   for(int i=0;i<n;i++){
    Student AD;
     cin>>AD.name>>AD.roll>>AD.section>>AD.math_marks>>AD.cls;
      if(i==1){
         topper=AD;
      }
      else{
        if(AD.math_marks>topper.math_marks){
          topper=AD;
        }
        else if(AD.math_marks==topper.math_marks){
          if(AD.roll<topper.roll){
            topper=AD;
          }
        }
      }
    }
    cout<<topper.name<<" "<<topper.roll<<" "<<topper.math_marks<<" "<<topper.cls<<endl;
  

  return 0;
}