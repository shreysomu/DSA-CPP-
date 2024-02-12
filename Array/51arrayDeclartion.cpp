#include <iostream>
using namespace std;

int main()
{
  int arr[8]; //Array Declaraion....
  cout << arr << endl; 
  cout << &arr << endl; //Both will print address of ARRAY.

  int brr[] = {2,5,9,6,23,56}; //Initialization of array....
  int brr[6] = {2,5,9,6,23,56}; //Initialization of array....(static array ie. fixed)

  return 0;
}