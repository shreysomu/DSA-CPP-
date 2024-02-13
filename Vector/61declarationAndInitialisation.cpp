#include<iostream>
#include<vector>
using namespace std;

// int main(){
//   //declaration..........
//   // vector<int>arr;
  
//   // //initialisation.......
//   // vector<int>arr{4,5,6,7,8};
//   // vector<int>arr(10,-1);

//   // int n ;
//   // cin>>n;
//   // vector<int>arr(n);    //......DynamicArray
//   // arr.push_back(5);
//   // arr.push_back(9);


// vector<int>arr;
// int ans = (sizeof(arr)/sizeof(int));
// cout<<ans<<endl;
// cout<<"size of array is : "<<arr.size()<<endl;
// cout<<"size of array is : "<<arr.capacity()<<endl;
// return 0;
// }

// int main(){
//   vector<int>arr;
//   cout<<"size of array is : "<<arr.size()<<endl;

// //inserting..............
//   arr.push_back(9);
//   arr.push_back(10);

// //printing array.........
//   for(int i =0;i<arr.size();i++){
//     cout<<arr[i]<<" ";  //9 10
//   }  
//   cout<<endl;

// //Remove.....
// arr.pop_back();
//    for(int i =0;i<arr.size();i++){
//     cout<<arr[i]<<" ";  //9
//   } 
//   cout<<endl;
//   return 0;
// }

// int main(){
//   int n ;
//   cout<<"Enter the value of n "<<endl;
//   cin>>n;

//   vector<int>brr(n,-1);
//   for(int i = 0;i<brr.size();i++){
//     cout<<brr[i]<<" ";   //-1,-1,-1,-1.......
//   }
//   cout<<endl;
//   return 0;
// }

int main(){
  vector<int>crr{10,23,56,89,87,54,35};
  for(int i = 0;i<crr.size();i++){
    cout<<crr[i]<<" ";   //10 23 56 89 87 54 35
  }
  cout<<endl;
  return 0;
}