#include <iostream>
using namespace std;

int main()
{

  int a, b;
  cout << "Enter the value of a :";
  cin >> a;

  cout << "Enter the value of b :";
  cin >> b;

  char ch;
  cout << "Enter the character(+,-,*,/,%) of operation you want to perform :";
  cin >> ch;

  switch (ch)
  {
  case '+':
    cout << "Sum of These Two Numbers is :" << a + b;

    break;

  case '-':
    cout << "Subtraction of These Two Numbers is :" << a - b;

    break;

  case '*':
    cout << "Multipication of These Two Numbers is :" << a * b;

    break;

  case '/':
    cout << "Division of These Two Numbers is :" << a / b;

    break;

  case '%':
    cout << "Moudulus of These Two Numbers is :" << a % b;

    break;

  default:
    cout << "You Have entered wrong Character." << endl;
  }
}