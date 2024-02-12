
// input  : 5 6 8 3 9 10 12 -1 -4
// Output : 5 -4 6 -1 8 12 3 10 9

#include <iostream>
using namespace std;

int main()
{
  int arr[] = {5, 6, 8, 3, 9, 10, 12, -1, -4};
  int size = 9;
  int start = 0;
  int end = 8; // size-1

  while (start <= end)
  {
    if (start > end)
      break;

    if (start == end)
    {
      cout << arr[start] << " ";
    }
    else
    {
      cout << arr[start] << " ";
      cout << arr[end] << " ";
    }
    start++;
    end--;
  }
  return 0;
}