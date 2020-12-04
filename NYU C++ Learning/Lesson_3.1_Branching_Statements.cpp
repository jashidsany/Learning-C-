#include <iostream>

using namespace std;

  int main() {

    /*    If Statements
       Syntax And Semantics
       --------------------
      - if(condition) {
       this is the body of the if statement, if true it is executed, if false code moves along the
       rest of the flow
     }

      - if(condition) {
       this body contains a boolean expression
     }
        else {
          runs opposite boolean condition from the if statement
     }
    */

    /* Write a program that reads from the user an integer, and prints it's absolute value.
       Example
       -------
       Please enter an integer:
       -7
       |-7| = 7
    */

    int userInput, absValue;

    cout << "Please enter an integer: " << flush;
    cin >> userInput;

    absValue = userInput;

    if(userInput < 0) {
   // userInput *= (-1) this operator multiplies the value and add its back into the variable
      absValue = userInput * (-1);
    }

    cout << "The absolute value of " << userInput << " is " << absValue << endl;

    /* Write a program that reads from the user a positive integer, and determines it's parity (even or odd).
       Example
       -------
       Please enter a positive integer:
       7
       7 is odd
    */

    cout << endl;

    int userInput1;

    cout << "Please enter a positive integer: " << flush;
    cin >> userInput1;

    if(userInput1 % 2 == 0) { // using % 2 == 0 can be used to determine whether a variable is even
        cout << userInput1 << " is even " << endl;
    }
    else {
      cout << userInput1 << " is odd " << endl;
    }

    /*
      int main() {
        int val = 0;

        if(val = 0) { this is a valid statement even though it is not a boolean expression
          cout << "val is 0" << endl;
      }
        else {
          cout << "val is not 0" << endl;
      }

        return 0;
    }
    */



  return 0;
  }
