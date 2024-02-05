// ******** ********
// *******   *******
// ******     ******
// *****       *****
// ****         ****
// ***           ***
// **             **
// *               *
// *               *
// **             **
// ***           ***
// ****         ****
// *****       *****
// ******     ******
// *******   *******
// ******** ********



#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << " Enter the number of rows : ";
  cin >> n;

  // Ist half......

  // A.(Inverted Half Pyramid).....
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n - row; col++)
    {
      cout << "*";
    }

    // Space(Full Pyramid)
    for (int col = 0; col < 2 * row + 1; col++)
    {
      cout << " ";
    }

    // mirror inverted half pyramid
    for (int col = 0; col < n - row; col++)
    {
      cout << "*";
    }
    cout << endl;
  }

  // IInd half......

  // A.( Half Pyramid).....
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < row + 1; col++)
    {
      cout << "*";
    }

    // Space(Inverted Full Pyramid)
    for (int col = 0; col < 2 * (n - row) - 1; col++)
    {
      cout << " ";
    }

    // mirror half pyramid
    for (int col = 0; col < row + 1; col++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}