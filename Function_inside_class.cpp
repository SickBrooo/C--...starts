#include<bits/stdc++.h>
using namespace std;
 class Student
   {
    public:
    string name ;
    int roll;
    int math;
    int english;
    Student( string name,int roll,int math,int english)
    {
       this->name=name;
       this->roll=roll;
       this->math=math;
       this->english=english;
    }
   void total()
   {
    int sum=0;
    sum=math+english;
    cout<<name<<" "<<"Total marks="<<sum<<endl;
   }

  };
int main()
{
  Student Adel("Adel mahamud",03,80,86);
  Adel.total();
  Student Arup("Arup mahamud",05,90,90);
  Arup.total();

  return 0;
}