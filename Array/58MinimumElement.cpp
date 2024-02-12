#include <iostream>
using namespace std;

int main()
{
  int arr[] = {5,6,8,3,9,10,12,-1,-4};
  int size = 9;
  int mini = INT_MAX;

  for(int i = 0;i<size;i++){
    if(arr[i]<mini){
      mini = arr[i];
    }
  }
  cout<<"Minimum element is :"<<mini;
  return 0;
} 