#include <iostream>
using namespace std;

int maxOfThree(int x,int y,int z)
{
  if(x>y && x> z){
    return x;
  }

  else if(y>z && y>x){
    return y ;
  }
  else 
   return z;
}
int main()
{
  int a,b,c;
  cout << "Enter the Three Numbers  : ";
  cin >> a >> b >>c;

  int res = maxOfThree(a,b,c);
  cout << "Maximum of these three numbers is :" << res;
}