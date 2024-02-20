#include <iostream>
using namespace std;

int printSumRowWise(int arr[3][3], int rows, int col)
{
  int sum = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < col; j++)
    {
      sum += arr[i][j];
    }
  }
  return sum;
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

cout<<"printing elements row wise : "<<endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout<<endl;
  }
  int sum = printSumRowWise(arr, row, col);
  cout << "Sum of row Wise :" << sum << endl;
  return 0;
}