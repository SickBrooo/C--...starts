#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   stringstream ad(s);
   string value;
   ad>>value;
   reverse(value.begin(),value.end());
   cout<<value;
   while(ad>>value){
   reverse(value.begin(),value.end());
    cout<<" "<<value;
  }

  return 0;
}