#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void winNums(int &num1, int &num2, int &num3, int &num4, int &num5, int &mega)
{

  num1 =  rand() %( (75 - 1 + 1)+1);
  num2 =  rand() %( (75 - 1 + 1)+1);
  num3 =  rand() %( (75 - 1 + 1)+1);
  num4 =  rand() %( (75 - 1 + 1)+1);
  num5 =  rand() %( (75 - 1 + 1)+1);
  mega =  rand() %( (15 - 1 + 1)+1);
}

int main()
{
  srand(time(NULL));

  int a, b, c, d, e, m = 0;

  winNums(a, b, c, d, e, m);

  cout << a<<" "
      << b << " "
      << c<< " "
      << d << " "
      << e<<" "
        << "mega: " << m << endl;

  return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
