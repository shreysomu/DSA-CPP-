#include <iostream>
using namespace std;

int main()
{

  int arr[] = {2, 5, 9, 6, 23, 56};
  cout << arr[5]<<endl; //56...

  //accessing all the elemets...
 int size = 6;
  for(int i = 0 ;i<size;i++){
    cout<<arr[i]<<" ";
  }


  int brr[20];
  cout<<endl<<"Enter the Values in Array "<<endl;

//Taking input in array....
  for(int i = 0;i<10;i++){
    cin>>brr[i];
  }

//printing the array.....
for(int i = 0 ;i<10;i++){
  cout<<brr[i]<<" ";
}

  return 0;
}