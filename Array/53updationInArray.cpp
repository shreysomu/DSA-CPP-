#include <iostream>
using namespace std;

int main()
{

  int arr[] = {2,5,9,6,23,56};
  for(int i = 0;i<6;i++){
    arr[i] = 1;
  }

  for(int i = 0;i<6;i++){
    cout<<arr[i]<<" "; //1,1,1,1,1,1,
  }

//2nd example....
  int brr[10] = {4,6};
  for(int i = 0;i<10;i++){
    cout<<endl<<brr[i]<<" "; //4,6,0,0,0,0,0,0,0,0
  }

  int crr[10] = {0};
   for(int i = 0;i<10;i++){
    cout<<endl<<crr[i]<<" "; //0,0,0,0,0,0,0,0,0,0
  }

    int drr[10] = {1};
   for(int i = 0;i<10;i++){
    cout<<endl<<drr[i]<<" "; //1,0,0,0,0,0,0,0,0,0
  }
  return 0;
}