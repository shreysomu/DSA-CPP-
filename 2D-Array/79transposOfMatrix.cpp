#include <iostream>
using namespace std;

void transpose(int A[][3], int B[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      B[i][j] = A[j][i];
}

int main()
{
  int A[3][3] = {
      {1, 1, 1},
      {2, 2, 2},
      {3, 3, 3},
  };

  int B[3][3], i, j;
  cout<<"Matrix before transpose : "<<endl;
    for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << " " << A[i][j];
    }
    cout << endl;
  }
  transpose(A, B);

  cout << "Transpose matrix is : "<<endl;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << " " << B[i][j];
    }
    cout << endl;
  }
  return 0;
}