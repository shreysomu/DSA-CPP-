#include <iostream>
using namespace std;

bool checkPrime(int n)
{

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
   return true;
}
int main()
{
  int number;
  cout << "Enter the Number :";
  cin >> number;

  bool res = checkPrime(number);
  if (res)
  {
    cout << "Entered Number is a prime number." << endl;
  }

  else
  {
    cout << "Entered Number is not a prime number." << endl;
  }
}