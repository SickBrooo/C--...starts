#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
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
  Student adel(2,10,4.00);
  Student* p=&adel;
  return p;
}
int main()                      // When retruning the address the function automatically 
{                               // disappear but the the address return but no accurate value;
  Student* Obj=fun();
  cout<<Obj->roll<<" "<<Obj->cls<<" "<<Obj->gpa<<endl;  

  return 0;
}