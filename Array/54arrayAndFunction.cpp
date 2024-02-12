#include <iostream>
using namespace std;


void printArray(int arr [],int size){
  for(int i =0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

void inc(int arr[],int size){
  arr[0] = arr[0] + 10;
   printArray(arr,size); //17,4,10

}
int main()
{
  int arr[] = {7,4,10};
  int size = 3;
  inc(arr,size);
  printArray(arr,size); //17,4,10
  return 0;
} 