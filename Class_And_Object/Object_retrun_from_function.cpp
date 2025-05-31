#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   int roll;
   double gpa;

   Student(int roll,double gpa)
   {
    this->roll=roll;
    this->gpa=gpa;

   }
};
   Student fun(){
       Student adel(100,5.00);
       return adel;
   }

int main()
{
   Student obj=fun();
   cout<<obj.roll<<" "<<obj.gpa;

  return 0;
}