#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  string name;
  int clas;
  char sec;
  int id;
};
int main()
{
   int n;
   cin>>n;
   Student arr[n];
   for(int i=0;i<n;i++)
   {
    cin.ignore();
    cin>>arr[i].name>>arr[i].clas>>arr[i].sec>>arr[i].id;
   }
   Student a[n]; //declaring this just to reverse a single portion (e.g Section);
   for(int i=0;i<n;i++)
   {
     a[i].sec=arr[i].sec;
   }
   reverse(a,a+n);
   
   for(int i=0;i<n;i++)
   {
    cout<<arr[i].name<<" "<<arr[i].clas<<" "<<a[i].sec<<" "<<arr[i].id<<endl;
   }

  return 0;
}