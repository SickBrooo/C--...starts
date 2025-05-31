#include<bits/stdc++.h>
using namespace std;
class Student
{
  public: // access modifier;
  int roll;
  int cls;
  double gpa;
  
  Student(int roll,int cls,double gpa)
  {
    this->roll=roll;
    this->cls=cls;
    this->gpa=gpa;
  }
};
  Student* fun()
  {
     Student* adel=new Student(7,10,5.00);
     return adel;

  }
   

int main()
{
   Student* obj=fun();
   cout<<obj->roll<<" "<<obj->cls<<" "<<obj->gpa<<endl;

  return 0;
}