#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
  int id;
  string name;
  char sec;
  int marks;
};
int main()
{
  int t;cin>>t;
  for (int i = 0; i < t; i++)
  {
    Student topper;
    for (int i = 0; i < 3; i++)
    {
      Student tem;
      cin >> tem.id >> tem.name >> tem.sec >> tem.marks;
      if (i == 1)
      {
        topper = tem;
      }
      else
      {
        if (tem.marks > topper.marks)
        {
          topper = tem;
        }
        if(topper.marks==tem.marks)
        {
          if(tem.id<topper.id)
          {
             topper=tem;
          }
        }
        
      }
    }
    cout << topper.id << " " << topper.name << " " << topper.sec << " " << topper.marks;
    cout << endl;
  }

  return 0;
}