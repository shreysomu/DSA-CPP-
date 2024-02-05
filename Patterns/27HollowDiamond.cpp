//          * 
//         *  * 
//        *    * 
//       *      * 
//      *        * 
//     *          * 
//    *            * 
//   *              * 
//  *                * 
// *                  * 
// *                  * 
//  *                * 
//   *              * 
//    *            * 
//     *          * 
//      *        *
//       *      *
//        *    *
//         *  *
//          *

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << " Enter the number of rows : ";
  cin >> n;

  // First Half...........
  //  spaces.......
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n - row - 1; col++)
    {
      cout << " ";
    }
 
 //Printing * ......
    for (int col = 0; col < 2 * row + 1; col++)
    {
      if (col == 0 || col == 2 * row) //// First and last character
      {
        cout << "* ";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  // SecondHalf....
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < row; col++)
    {
      cout << " ";
    }

    for (int col = 0; col < 2 * (n - row) - 1; col++)
    {
      if (col == 0 || col == 2 * (n - row) - 2)
      {
        cout << "* ";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}