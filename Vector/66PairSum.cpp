#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr{3, 4, 2, 1, 5, 7, 8, 9, 6};
  vector<int> vec;
  int sum = 13;
  for (int i = 0; i < arr.size(); i++)
  {
    int element = arr[i];

    for (int j = i + 1; j < arr.size(); j++)
    {
      if (element + arr[j] == sum)
      {
        cout << "Pair found : " << element << "," << arr[j] << endl;
      }
    }
  }
  return 0;
}
