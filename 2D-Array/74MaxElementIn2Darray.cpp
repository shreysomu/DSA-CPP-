#include <iostream>
using namespace std;

int getMax(int arr[3][3], int rows, int col)
{
  int maxi = INT_MIN;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] > maxi)
      {
        maxi = arr[i][j];
      }
    }
  }
  return maxi;
}
int main()
{
  int arr[3][3] = {{1, 2, 4}, {3, 6, 7}, {9, 20, 35}};
  int row = 3;
  int col = 3;
  int key = 211;

  int max = getMax(arr, row, col);
  cout << "Maximum element of given array is :" << max;
  return 0;
}