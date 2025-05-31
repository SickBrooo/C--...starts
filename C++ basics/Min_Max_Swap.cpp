#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int small=min(a,b);
  cout<<"small="<<small<<endl;
  int maximum=max(a,b);
  cout<<"Large="<<maximum<<endl;
  swap(a,b);
  cout<<"swapped="<<a<<" "<<b;
  return 0;
}