#include <iostream>
using namespace std;

int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}
int main()
{
  int number;
  cout << "Enter the Number :";
  cin >> number;

  int res = factorial(number);
  cout << "Factorial of entered number is :" << res;
}