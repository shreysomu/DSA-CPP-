
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr{3, 4, 6, 2, 2, 1, 5, 7, 8, 9};
  vector<int> brr{2, 4, 6, 10, 11};
  vector<int> vec;

  // outer loop on arr vector.........
  for (int i = 0; i < arr.size(); i++)
  {
    int element = arr[i];
    // for each element run loop on brr.......
    for (int j = 0; j < brr.size(); j++)
    {
      if (element == brr[j])
      {
        brr[j] = -1; // marking or setting  so that once matched value can't match again......
        vec.push_back(element);
      }
    }
  }
  cout << "Intersection of these two array is: " << endl;
  for (auto value : vec)
  {
    cout << value << " ";
  }
  cout << endl;
  return 0;
}