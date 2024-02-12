#include <iostream>
using namespace std;

int main()
{

  int arr[] = {0, 1, 2, 0, 1, 0, 8, 1, 1, 1, 0, 0, 0, 1, 1};
  int size = 15;

  int numZero = 0;
  int numOne = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
    {
      numZero++;
    }

    if (arr[i] == 1)  //using if instead of else just because there may be also some other elements are also present other than 1 and 0.
    {
      numOne++;
    }
  }
  cout << "Number of zeroes is :" << numZero<<endl;
  cout << "Number of ones is :" << numOne;

  return 0;
}