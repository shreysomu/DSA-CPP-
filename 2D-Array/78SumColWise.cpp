#include <iostream>
using namespace std;

void printSumRowWise(int arr[3][3], int rows, int col)
{
  
  for (int i = 0; i < col; i++)
  {
    int sum = 0;
    for (int j = 0; j < rows; j++)
    {
      sum += arr[i][j];
    }
    cout<<sum<<" ";
  }
}
int main()
{
  int arr[3][3];
  int row = 3;
  int col = 3;
  cout<<"Enter elements : ";
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }

cout<<"printing elements col wise : "<<endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout<<endl;
  }
  printSumRowWise(arr, row, col);
  return 0;
}