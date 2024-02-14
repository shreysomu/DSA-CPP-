#include <iostream>
#include <cmath>
using namespace std;

int binToDec(int n)
{
  int deci = 0;
  int i = 0;
  while (n)
  {
    int bit = n % 10;
    deci = bit * pow(2, i++) + deci;
    n /= 10;
  }
  return deci;
}
int main()
{
  int n;
  cout << "Enter a binary number : ";
  cin >> n;
  int decimal = binToDec(n);
  cout << "Decimal of entered binary number is :" << decimal << endl;
  return 0;
}