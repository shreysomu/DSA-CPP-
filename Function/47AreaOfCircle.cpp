#include <iostream>
using namespace std;

float areaOfCircle(float radius)
{
    float area = 3.14*radius*radius;
    return area;
}
int main()
{
  int radius;
  cout << "Enter the radius of circle :";
  cin >> radius;

  float res = areaOfCircle(radius);
  cout << "Sum of all the Even numbers is :" << res;
}