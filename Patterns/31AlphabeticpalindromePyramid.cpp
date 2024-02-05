// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
// ABCDEFEDCBA
// ABCDEFGFEDCBA
// ABCDEFGHGFEDCBA
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of Rows :";
  cin >> n;
  for (int row = 0; row < n; row++)
  {
    int col;
    for (col = 0; col < row + 1; col++)
    {
      int res = col + 1;
      char ch = res + 'A' - 1;
      cout << ch;
    }

    col = col - 1;
    for (; col >= 1; col--)
    {
      int ans = col;
      char ch1 = ans + 'A' - 1;
      cout << ch1;
    }
    cout << endl;
  }
  return 0;
}