// 1
// 121
// 12321
// 1234321
// 123454321


#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of Rows :";
  cin >> n;
  for (int row = 0; row < n; row++)
  {
    int col = 0;
    for (col = 0; col < row + 1; col++)
    {
      cout << col + 1;
    }

    col = col - 1;
    for (; col >= 1; col--)
    {
      cout << col;
    }
    cout << endl;
  }
  return 0;
}