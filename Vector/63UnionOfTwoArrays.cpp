
// Assuming no duplicate elements.....

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr{3, 1, 5, 7, 8, 9};
  vector<int> brr{2, 4, 6, 10, 11};
  vector<int> vec;

  // inserting all the elements of arr in vec.....
  for (int i = 0; i < arr.size(); i++)
  {
    vec.push_back(arr[i]);
  }

  // inserting all the elements of brr in vec.....
  for (int i = 0; i < brr.size(); i++)
  {
    vec.push_back(brr[i]);
  }

  cout << "Union of these two array without duplicate elements is: " << endl;
  for (auto value : vec)
  {
    cout << value << " ";    //3 1 5 7 8 9 2 4 6 10 11 
  }

  return 0;
}