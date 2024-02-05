//       * 
//      * * 
//     * * * 
//    * * * * 
//   * * * * * 
//  * * * * * * 
// * * * * * * * 
// * * * * * * * 
//  * * * * * * 
//   * * * * * 
//    * * * * 
//     * * * 
//      * * 
//       * 

//#Logic ---->>> full pyramid + inverted full pyramid...


 #include <iostream>
using namespace std;

int main()
{
  int n;
  cout << " Enter the number of rows : ";
  cin >> n;

//Full Pyramid......
  for (int row = 0; row < n; row++)
  {
    for(int col = 0 ;col<n-row-1;col++){
      cout<<" ";
    }

    for(int col = 0 ;col<row+1;col++){
      cout<<"* ";
    }
    cout << endl;
  }


//Inverted Full pyramid....
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < row; col++)
    {
      cout << " ";
    }

    for (int col = 0; col < n - row; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}