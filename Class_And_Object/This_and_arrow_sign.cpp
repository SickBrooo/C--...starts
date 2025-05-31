#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  int roll;
  double cg;

  Student(int roll,double cg)
  {
    (*this).roll=roll;
    //this->roll=roll;
     this->cg=cg;
  }
   
};
int main()
{
   Student adel(1,3.89);
   cout<<adel.roll<<" "<<adel.cg;

  return 0;
}