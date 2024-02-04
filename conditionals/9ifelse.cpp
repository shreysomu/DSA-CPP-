#include<iostream>
using namespace std;

int main(){
  int age ;
  cout<<"Enter your age :";
  cin>>age;
  if(age>=18){
    cout<<"You are eligible to voat."<<endl;
  }
  else {
    cout<<"You are not eligible to voat."<<endl;
  }
  return 0 ;
}