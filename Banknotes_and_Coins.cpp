#include<bits/stdc++.h>
using namespace std;
int main()
{
  double n;
   cin>>n;
   int x=n/1;
   double y=n-x;
   int note100=x/100;
   int ex100=(x%100);
   int note50=(ex100/50);
   int ex50=ex100%50;
   int note20=ex50/20;
   int ex20=ex50%20;
   int note10=ex20/10;
   int ex10=ex20%10;
   int note5=ex10/5;
   int ex5=ex10%5;
   int note2=ex5/2;
   int ex2=ex5%2;
   cout<<"NOTAS:"<<endl<<note100<<" "<<"nota(s) de R$ 100.00"<<endl;
   cout<<note50<<" "<<"nota(s) de R$ 50.00"<<endl;
   cout<<note20<<" "<<"nota(s) de R$ 20.00"<<endl;
   cout<<note10<<" "<<"nota(s) de R$ 10.00"<<endl;
   cout<<note5<<" "<<"nota(s) de R$ 5.00"<<endl;
   cout<<note2<<" "<<"nota(s) de R$ 2.00"<<endl;
   double newy=y*100;
   int note_50=newy/50;
   int ex_50=fmod(newy,50);
   int note_25=ex_50/25;
   int ex_25=ex_50%25;
   int note_10=ex_25/10;
   int ex_10=ex_25%10;
   int note_5=ex_10/5;
   int ex_5=ex_10%5;
   int note_1=ex_5/1;
   cout<<"MOEDAS:"<<endl<<ex2<<" "<<"moeda(s) de R$ 1.00"<<endl;
   cout<<note_50<<" "<<"moeda(s) de R$ 0.50"<<endl;
   cout<<note_25<<" "<<"moeda(s) de R$ 0.25"<<endl;
   cout<<note_10<<" "<<"moeda(s) de R$ 0.10"<<endl;
   cout<<note_5<<" "<<"moeda(s) de R$ 0.05"<<endl;
   cout<<note_1<<" "<<"moeda(s) de R$ 0.01"<<endl;


  return 0;
}