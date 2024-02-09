#include <iostream>
using namespace std;

void printName(int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "My Name is SHREY." << endl;
  }
}
int main()
{
  int n;
  cout << "How Many times you want to print your name ?:";
  cin >> n;

  printName(n);
}