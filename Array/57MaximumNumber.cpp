#include <iostream>
using namespace std;

int main()
{
  int arr[] = {5, 6, 8, 3, 9, 10, 12, -1, -4};
  int size = 9;
  int maxi = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > maxi)
    {
      maxi = arr[i];
    }
  }
  cout << "Maximum element is :" << maxi;
  return 0;
}