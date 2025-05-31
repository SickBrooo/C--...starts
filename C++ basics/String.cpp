#include<iostream>
using namespace std;
int main()
{
  int x;
  string b;
  cin>>x;
  cin.ignore();
  char s[100];
  cin.getline(s,100);
  cout<<x<<endl;
  cout<<s;
  return 0;
}