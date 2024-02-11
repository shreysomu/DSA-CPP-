#include <iostream>
using namespace std;

char getGrade(int marks)
{
  if (marks >= 90)
  {
    return 'A';
  }
  else if (marks >= 80)
  {
    return 'B';
  }
  else if (marks >= 60)
  {
    return 'C';
  }
  else if (marks >= 40)
  {
    return 'D';
  }
  else
    return 'F';
}

int main()
{
  int marks;
  cout << "Enter the marks of Student :";
  cin >> marks;

  char res = getGrade(marks);
  cout << "grade of student is :" << res;
}