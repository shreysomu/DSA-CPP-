#include <iostream>
using namespace std;

int getSum(int n , int m)
{
  int sum = n + m;
  return sum;
}
int main()
{
  int a,b;
  cout << "Enter Two numbers :";
  cin >> a>>b;

  int res = getSum(a,b);
  cout << "Sum of these two numbers is :" << res;
}