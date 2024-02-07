//     1
//    232
//   34543
//  4567654
// 567898765

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of Rows :";
  cin >> n;
  for (int row = 0; row < n; row++)
  {

//Space...
    for (int col = 0; col < n - row - 1; col++)
    {
      cout << " ";
    }

//Numbers.....
    for (int col = 0; col < row + 1; col++)
    {
      cout << col + row + 1;
    }

//Reverse counting.....
    int start = 2 * row;
    for (int col = 0; col < row; col++)
    {
      cout << start;
      start--;
    }
    cout << endl;
  }
  return 0;
}