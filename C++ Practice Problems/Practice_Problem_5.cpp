#include <iostream>

using namespace std;

  int main() {

    /* Write a C++ program to prompt the user to input 3 integer values and print these values
       in forward and reversed order, as shown below.
       Output
       ------
       Please enter your 3 numbers: 12 45 78

       Your numbers forward:
       12
       45
       78

       Your numbers reversed:
       78
       45
       12
    */

    int num1, num2, num3;

    cout << "Please enter your 3 numbers: " << flush;
    cin >> num1 >> num2 >> num3;

    cout << "Your numbers forward:\n" << num1 << "\n" << num2 << "\n" << num3 << "\n" << endl;
    cout << "Your numbers reversed:\n" << num3 << "\n" << num2 << "\n" << num1 << endl;


  return 0;
  }
