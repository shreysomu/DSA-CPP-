#include <iostream>
using namespace std;

//method 1
// bool evenOrOdd(int num)
// {
//   if (num % 2 == 0)
//   {
//     return true;
//   }

//   else
//   {
//     return false;
//   }
// }

//Method 2------->>>using bit

bool evenOrOdd(int num)
{
  if ((num&1) == 0)
  {
    return true;
  }

  else
  {
    return false;
  }
}
int main()
{
  int number;
  cout << "Enter the Number :";
  cin >> number;

  bool res = evenOrOdd(number);
  if (res)
  {
    cout << "Entered Number is an Even Number." ;
  }
  else
  {
    cout << "Entered Number is an odd Number." ;
  }
}