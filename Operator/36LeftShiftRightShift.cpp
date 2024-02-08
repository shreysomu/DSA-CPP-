#include<iostream>
using namespace std;

int main(){
  int a = 20;
  int b = 24;
  int c = 10;
  a = a<<2; //Left Shift ......
  cout<<a<<endl;

  b = b>>2; //Right shift......
  cout<<b<<endl;  

  c = c<<-1; //(Throw garbage value or some warnings...) 
  cout<<c<<endl;
}