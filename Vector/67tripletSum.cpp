#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr{3, 4, 2, 1, 5, 7, 8, 9, 6};
  vector<int> vec;
  int sum = 19;
  for (int i = 0; i < arr.size(); i++)
  {
    int element1 = arr[i];
    for (int j = i + 1; j < arr.size(); j++)
    {
      int element2 = arr[j];
      for (int k = j + 1; k < arr.size(); k++)
      {
        if (element1 + element2 + arr[k] == sum)
        {
          cout << "Pair found : " << element1 << "," << element2 << "," << arr[k] << endl;
        }
      }
    }
  }
  return 0;
}
