#include<iostream>
using namespace std;

int main(){
  int n = 5;
  for(int i = 0;i<n;i++){
    cout<<"Somu"<<endl; //print one time only ....
    break;
  }
  cout<<"SHREY"<<endl; // Somu SHREY

  for(int i = 0;i<n;i++){
    if(i == 2)
    continue; //it will skip at i == 2
    cout<<i<<endl;  // 0 1 3 4
  }
}