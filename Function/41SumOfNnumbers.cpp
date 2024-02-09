#include <iostream>
using namespace std;

int getSum(int n)
{
  int sum = 0;
  for (int i = 0; i <= n; i++)
  {
    sum = sum + i;
  }
  return sum;
}
int main()
{
  int n;
  cout << "Enter the value of n :";
  cin >> n;

  int res = getSum(n);
  cout << "Sum of all the numbers till n is :" << res;
}