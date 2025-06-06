#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cntE=0;
    int cntG=0;
    int cntY=0;
    int cntP=0;
    int cntT=0;
     for(int i=0;i<s.length();i++)
     {
       if(s[i]=='E'||s[i]=='e')
       {
        cntE++;
       }
       if(s[i]=='G'||s[i]=='g')
       {
        cntG++;
       }
       if(s[i]=='Y'||s[i]=='y')
       {
        cntY++;
       }
       if(s[i]=='P'||s[i]=='p')
       {
        cntP++;
       }
       if(s[i]=='T'||s[i]=='t')
       {
        cntT++;
       }
     }
     int n=min({cntE,cntG,cntY,cntP,cntT});
      // cout<<cntE<<" "<<cntG<<" "<<cntY<<" "<<cntP<<" "<<cntT;
    cout<<n;
    
    

  return 0;
}