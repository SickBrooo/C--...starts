#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
	public:
  int jersey_no;
	string country;
};

int main()
{
   Cricketer* adel=new Cricketer;
   adel->jersey_no=10;
   adel->country="Bangladesh";
   Cricketer* arup=new Cricketer;
   arup->jersey_no=adel->jersey_no;
   arup->country=adel->country;
   delete adel;
   cout<<arup->country<<" "<<arup->jersey_no;
  

  return 0;
}