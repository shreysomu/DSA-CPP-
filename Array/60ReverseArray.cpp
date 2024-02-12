#include <iostream>
using namespace std;

int main()
{
  int arr[] = {5,6,8,3,9,10,12,-1,-4};
  int size = 9;
  
  int start = 0;
  int end = size-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }

  cout<<"Printing array after reversing : "<<endl;
  for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
} 