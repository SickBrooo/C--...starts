#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string str;
   cin>>str;
   int anton=0;
   int danik=0;
  //  getline(cin,str);
   for(int i=0;i<n;i++)
   {
    if(str[i]=='A'){
      anton++;
    }
    else{
      danik++;
    }
   }
   if(anton>danik){
    cout<<"Anton"<<endl;
   }
   else if(danik>anton){
    cout<<"Danik";
   }
   else if(anton==danik)
   {
    cout<<"Friendship"<<endl;
   }

   

  return 0;
}