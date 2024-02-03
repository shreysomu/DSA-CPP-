#include<iostream>
using namespace std;

int main(){
  char ch = 97;
  cout<<ch<<endl; //implicit-typecasting

  double d = 56.45;
  int x = (int)d + 2; //Explicit-Typecasting...
  cout<<"The value of x is : "<<x<<endl;
  return 0 ;
}