#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
  public:
  string name ;
  int jersy;
    
  Cricketer(string name,int jersy)
  {
    this->name=name;
    this->jersy=jersy;
  }

};
int main()
{
   Cricketer *Dhoni=new Cricketer("Dhoni",100);
   Cricketer *Kohli=new Cricketer("Kohli",90);
   *Kohli=*Dhoni;
   delete Dhoni;
  
   cout<<Kohli->name<<" "<<Kohli->jersy;
  return 0;
}