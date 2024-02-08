#include<iostream>
using namespace std;

int main(){
  int a = 10;
  cout<<++a<<endl;  //preIncrement.....//11

  int b = 12;
  cout<<b++<<endl; //postIncrement....//12

  int c = 13;
  int d = ++c+1;  
  cout<<d<<endl;  //15
  cout<<c<<endl; //14

  int e = 17;
  int f = (e++)+1;
  cout<<f<<endl; //18
  cout<<e<<endl;  //18

  int g = 5;
  int h = 6;
  int i = (++g) * (--h);  
  int j = (--g) * (h++); 
  cout<<i<<endl<<j<<endl;   //30 25
}
