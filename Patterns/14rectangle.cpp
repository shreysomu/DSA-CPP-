#include <iostream>
using namespace std;

int main()
{
  int rowCount, colCount;
  cout << " Enter the number of rowCount : ";
  cin >> rowCount;
  cout << "Enter the number of columnCount : ";
  cin >> colCount;
  for (int row = 0; row < rowCount; row++)
  {
    for (int col = 0; col < colCount; col++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}