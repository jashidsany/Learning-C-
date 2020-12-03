#include <iostream>

using namespace std;

  int main() {

    /* The Bool Data Type
       ------------------
       Kind Of Data: Truth value (true/false)(1/0)
       Inner Representation:
       - Each bool data uses 1 byte(8 bits)
       - False is represented by a byte of 0s
       - True is any non-zero value
       C++ Literals: true, false
       - Bool data type is not an arthimetic type.

        Boolean Operators: Not, And, Or
        -------------------------------
       - Not Operator: Syntax for Not is !
          p   | not p
        -------------
        True  | False
        False | True

        int main() {
          bool b1, b2, b3;

          b1 = true;
          b2 = !b1; sets b2 to false
          b3 = !false; sets b3 to true

          return 0;
        }

       - And Operator: Syntax for And is &&
          p   |   q   | p and
         ----------------------
         True  | True  | qTrue
         True  | False | False
         False | True  | False
         False | False | False

          int main() {
            bool b1, b2, b3;

            b1 = true;
            b2 = false;
            b3 = b1 && b2;
            b3 = b1 && !b2;

            return 0;
        }

       - Or Operator: Syntax for Or is ||
            p    |  q   | p or q
          ----------------------
          True  | True  | True
          True  | False | True
          False | True  | True
          False | False | False

          int main() {
          bool b1, b2, b3;

          b1 = false;
          b2 = b1 || !b1;
          b3 = b2 && (b1 || true);

          return 0;
        }
    */

    /* Atomic Boolean Expressions
       --------------------------
       The Bool Literals: true, false

       Compound Boolean Expressions
       ----------------------------
       Simple boolean expressions combined with boolean operators (!, &&, ||)

       int main() {
        bool b;
        int x;

        b = true;
        b = (true && !b); this is a compound expression

        x = 3;
        b = ( x < 5);
        b = (x >= 0) && (x < 5); either is an atomic expression
        b = (x == 3) || (x == 4); this would be true

        return 0;
     }
    */
  return 0;
  }
