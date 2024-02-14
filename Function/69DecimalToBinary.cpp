#include <iostream>
#include<cmath>
using namespace std;

//Method 1st : DIVISION METHOD .......

// int decToBin(int n)
// {
//   int bin = 0;
//   int i = 0;
//   while (n > 0)
//   {
//     int bit = n % 2;
//     bin = bit * pow(10, i++) + bin;
//     n /= 2;
//   }
//   return bin;
// }

//Method 2nd : BIT METHOD.......

int decToBin(int n)
{
  int bin  = 0;
  int i = 0;
  while (n > 0)
  {
    int bit = n & 1;
    bin = bit * pow(10, i++) + bin;
    n = n>>1;
  }
  return bin;
}
int main()
{
  int n;
  cout << "Enter a decimal number : ";
  cin >> n;
  int binary = decToBin(n);
  cout << "Binary of entered decimal number is :" << binary << endl;
  return 0;
}