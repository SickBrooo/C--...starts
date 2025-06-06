#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int index=s.find("EGYPT");
    while(index!=-1){
       s.replace(index,5," ");
       index=s.find("EGYPT");
    }
  cout<<s<<endl;

  return 0;
}