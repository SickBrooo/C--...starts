#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  x%2==0 ? cout<<x<<" "<<"Even Number": cout<<x<<" "<<"not a even number";
  // Ternary Operator= (condition) ? T : F;
  return 0;
}