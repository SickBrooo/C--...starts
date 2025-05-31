#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    double gpa;
    Student(int r,int g)
    {
      roll=r;
      gpa=g;

    }

};
int main()
{ 
    Student adel(30,5.00);
    Student arup(10,5.00);
  // Student adel;
  // adel.gpa=5.00;
  // adel.roll=10;
  // Student arup;
  // arup.gpa=4.93;
  // arup.roll=30;

  cout<<adel.gpa<<" "<<adel.roll<<endl;
  cout<<arup.gpa<<" "<<arup.roll<<endl;

  
  return 0;
}