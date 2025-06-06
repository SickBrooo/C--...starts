#include<bits/stdc++.h>
using namespace std;
int main()
{
   string  s="Hello World";
   string s2= "HiAdel";
    //s+=s2;
    //s.append(s2); // same work
    //s.push_back('A'); // 1 single charecter only.
    // s2.pop_back(); 
    // s2.pop_back(); 
    //s="gello world"; value assign;
    //s=s2;
    //s.assign("i love you");//builtin function
    //s2.erase(0,2);
    //s.replace(6,5,"Adel mahamud");
    s.insert(5,"Adel");
   
    cout<<s2<<" "<<s<<endl;



  return 0;
}