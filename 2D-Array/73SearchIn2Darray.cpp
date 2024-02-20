#include <iostream>
using namespace std;

bool findKey(int arr[3][3], int rows, int col,int key)
{

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if(arr[i][j] == key)
      return true;
    }
  }
  return false;
}
int main()
{
  int arr[3][3] = {{1, 2, 4}, {3, 6, 7}, {9, 20, 35}};
  int row = 3;
  int col = 3;
  int key = 211;

  if(findKey(arr,row,col,key)){
    cout<<"Key element is found. "<<endl;
  }
  else{
    cout<<"key element is not found."<<endl;
  }
  return 0;
}