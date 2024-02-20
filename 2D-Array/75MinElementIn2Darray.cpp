#include <iostream>
using namespace std;

int getMinimum(int arr[3][3], int rows, int col)
{
  int mini = INT_MAX;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] < mini)
      {
        mini = arr[i][j];
      }
    }
  }
  return mini;
}
int main()
{
  int arr[3][3] = {{1, 2, 4}, {3, 6, 7}, {9, 20, 35}};
  int row = 3;
  int col = 3;
  int key = 211;

  int max = getMinimum(arr, row, col);
  cout << "Minimum element of given array is :" << max;
  return 0;
}