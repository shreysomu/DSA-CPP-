#include <iostream>
using namespace std;

int main()
{
  int arr[3][3] = {{1, 2, 4}, {3, 6, 7}, {9, 20, 35}};

  // row-wise access...
  cout << "Printing Row-wise :" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Printing Col-wise :" << endl;
  // col-wise access...
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
  return 0;
}