#include <iostream>
#include <string>

using namespace std;

  int main() {

    /* Write a program that reads from the user a character, and classifies it to one of the following:
       - Lower case letter
       - Upper case letter
       - Digit
       - Not alpha-numeric character
      Example
      -------
      Please enter a character:
      D
      D is an upper case letter
    */

    char userCh;

    cout << "Please enter a character: " << flush;
    cin >> userCh;

    if(userCh >= 'a' && userCh <= 'z') {
      cout << userCh << " is a lower case letter" << endl;
    }
    else if(userCh >= 'A' && userCh <= 'Z') {
      cout << userCh << " is an upper case letter" << endl;
    }
    else if(userCh >= '0' && userCh <= '9') {
      cout << userCh << " is a digit" << endl;
    }
    else {
      cout << userCh << " is not alpha-numeric character" << endl;
    }

    /* Write a program that reads from the user a time entered in a 24 hour format,
       and prints the equivalent time in a 12 hour format.
       Exmaple
       -------
       Please enter a time in a 24 hour format
       15:37
       15:37 is 3:37
    */

    cout << endl;

    int hour24, minutes24;
    int hour12, minutes12;
    string period;
    char temp;

    cout << "Please enter a time in a 24 hour format: " << flush;
    cin >> hour24 >> temp >> minutes24;

    minutes12 = minutes24;
    if(hour24 >= 0 && hour24 <= 11) {
      period = "am";
        if(hour24 == 0) {
          hour12 = 12;
        }
        else {
          hour12 = hour24;
        }
    }
    else {
      period = "pm";
      if(hour24 == 12) {
        hour12 = 12;
      }
      else {
        hour12 = hour24 - 12;
      }
    }

    cout << hour24 << ":" << minutes24 << " is " << hour12 << ":" << minutes12 << " " << period << endl;

    /* Switch Statement Syntax
       -----------------------
       switch(numeric-expression) {
         case constant:


         break;
         case constant:


         break;

         default;


         break;
       }

       Switch Statements
       -----------------
      - Switch statements are not as powerful as if statements. Expression in if statements can be a
       complex boolean statement.
      - The numeric-expression must be of type int (short int, int, long int),
        char or bool.
      - The case labels must be constants (literals or named constants).
      - If no case label matches the value of numeric-expression, control branches to the default label
       (If there is no default label than control passes to the statement following the entire switch statement)
      - After a branch is taken, control proceeds sequentially until either break or the end of the switch statement
        occurs. That's why there is usually a break at the end of each branch.
    */

    /* Write a program that reads from the user a simple mathematical expression
       (operators allowed: +, -, /, *), and prints it's value.
       Example
       -------
       Please enter an expression of the form arguement op arguement:
       5.2 * 4
       20.8
    */

     cout << endl;

     double arg1, arg2;
     double res;
     char op;

     cout << "Please enter an expression of the form arg1 op arg2: " << flush;
     cin >> arg1 >> op >> arg2;

     switch(op) {
       case '+':
             res = arg1 + arg2;
             cout << res << endl;
             break;
       case '-':
             res = arg1 - arg2;
             cout << res << endl;
             break;
       case '*':
             res = arg1 * arg2;
             cout << res << endl;
             break;
       case '/':
             if(arg2 != 0) {
             res = arg1 / arg2;
             cout << res << endl;
           }
           else {
             cout << "Illegal expression" << endl;
           }
             break;
       default:
             cout << "Illegal expression" << endl;
             break;
     }







  return 0;
  }
