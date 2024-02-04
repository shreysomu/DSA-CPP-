#include<iostream>
using namespace std;

int main(){
  int marks;
  cout<<"Enter the marks :";
  cin>>marks;
  if(marks>=90){
    cout<<"You are passed with grade A"<<endl;
  }
  else if(marks>=75){
    cout<<"You are passed with grade B"<<endl;
  }

  else if(marks>=60){
    cout<<"You are passed with grade C"<<endl;
  }

  else if(marks>=40){
    cout<<"You are passed with grade D"<<endl;
  }
  else {
    cout<<"You are failed"<<endl;
  }
  return 0 ;
}