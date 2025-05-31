#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  char name[100];
  int roll;
  float gpa;

};
int main()
{ 
  Student Adel,ad;
  // Adel.roll=30;
  // Adel.gpa=5.00;
  // char temp[100]="Adel Mahamud";
  // strcpy(Adel.name,temp);
  //taking as input;
  cin.getline(Adel.name,100);
  cin>>Adel.roll>>Adel.gpa;
  cin.ignore();
  cin.getline(ad.name,100);
  cin>>ad.roll>>ad.gpa;
  
  cout<<Adel.roll<<endl<<Adel.gpa<<endl<<Adel.name<<endl;
  cout<<ad.roll<<" "<<ad.gpa<<" "<<ad.name;
 
  return 0;
}