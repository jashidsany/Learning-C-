#include <iostream>

using namespace std;

  int main() {

    /* Write a C++ program to produce the output as shown below:
       Results:
       x value | y value | expressions  | results
       10      | 5       |    x+=y      |    x=15
       10      | 5       |    x-=y-2    |    x=7
       10      | 5       |    x*=y*5    |    x=250
       10      | 5       |    x/=x/y    |    x=5
       10      | 5       |    x%=y      |    x=0
    */

    int x = 10;
    int y = 5;

    cout << "x value  " << "y value  " << "expressions  " << "results" << endl;
    cout << x << "\t|" << y << "\t |" << "x+=y" << "\t      |" << "x=" << x+y << endl;
    cout << x << "\t|" << y << "\t |" << "x-=y-2" << "      |" << "x=" << x-(y-2) << endl;
    cout << x << "\t|" << y << "\t |" << "x*=y*5" << "      |" << "x=" << x*(y*5) << endl;
    cout << x << "\t|" << y << "\t |" << "x/=x/y" << "      |" << "x=" << x/(x/y) << endl;
    cout << x << "\t|" << y << "\t |" << "x%=y" << "\t      |" << "x=" << x%y << endl;

  return 0;
  }
