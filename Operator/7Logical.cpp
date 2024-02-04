#include<iostream>
using namespace std;

int main(){

  int a = 5;
  int b = 8;
  cout<<(a>=5 && b<8)<<endl;
  cout<<(a>=5 || b<8)<<endl;
  cout<<(!(a>=5 && b<8))<<endl;
  return 0 ;
}