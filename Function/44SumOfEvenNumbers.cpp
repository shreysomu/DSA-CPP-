#include <iostream>
using namespace std;

int getEvenSum(int n)
{
  int sum = 0;
  for (int i = 0; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      sum = sum + i;
    }
  }
  return sum;
}
int main()
{
  int n;
  cout << "Enter the value of n :";
  cin >> n;

  int res = getEvenSum(n);
  cout << "Sum of all the Even numbers is :" << res;
}