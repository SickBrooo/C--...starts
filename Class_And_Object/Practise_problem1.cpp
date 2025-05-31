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

   Student(string name,int roll,char section,int math_marks,int cls)
   {
      this->name= name;
      this->roll=roll;
      this->section=section;
      this->math_marks=math_marks;
      this->cls=cls;
   }

};
int main()
{
   Student Adel("adel mahamud",11,'A',98,10);
   Student A("A mahamud",12,'A',88,10);
   Student Ad("ad mahamud",13,'A',100,10);
   
    if(Adel.math_marks>A.math_marks&&Adel.math_marks>Ad.math_marks){
      cout<<Adel.name;
    }
    else if(A.math_marks>Adel.math_marks&&A.math_marks>Ad.math_marks){
      cout<<A.name;
    }
    else if(Ad.math_marks>Adel.math_marks&&Ad.math_marks>A.math_marks){
      cout<<Ad.name;
    }

  return 0;
}