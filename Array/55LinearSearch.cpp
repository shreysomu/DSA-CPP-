#include <iostream>
using namespace std;

// 1st way....

// int main()
// {

//   int arr[7] = {3, 4, 5, 63, 65, 34, 89};
//   int size = 7;
//   cout << "Enter the key to find :";
//   int key;
//   cin >> key;
//   int flag = 0;
//     for (int i = 0; i < size; i++)
//   {
//     if (arr[i] == key)
//     {
//       flag = 1;
//     }
//   }

//   if (flag)
//   {
//     cout << "Key Element found in this array." << endl;
//   }
//   else
//   {
//     cout << "Key Element not found in this array." << endl;
//   }
//   return 0;
// }

// 2nd way....(Creating function.....)
bool find(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return true;
    }
  }
  return false;
}
int main()
{

  int arr[7] = {3, 4, 5, 63, 65, 34, 89};
  int size = 7;
  cout << "Enter the key to find :";
  int key;
  cin >> key;

  if (find(arr, size, key))
  {
    cout << "Key Element found in this array." << endl;
  }
  else
  {
    cout << "Key Element not found in this array." << endl;
  }
  return 0;
}