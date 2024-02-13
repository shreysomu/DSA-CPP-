
// input : 1 2 4 2 1 3 6 5 5 6 4
// output : Unique Element is :3

#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
  int ans = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    ans = ans ^ arr[i];   //finding xor it will cancell all the matching element as we know that same element returns zero.....
  }
  return ans;
}
int main()
{
  int n;
  cout << "Enter the value of n :";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter the elements :" << endl;

  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
  int uniqueElement = findUnique(arr);
  cout << "Unique Element is :" << uniqueElement << endl;
  return 0;
}