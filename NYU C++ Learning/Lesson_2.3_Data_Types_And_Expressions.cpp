#include <iostream>

using namespace std;

  int main() {

    /* The Char Data Type
       ------------------
       Kind Of Data: Characters
       Inner Representation: Each char data uses 1 byte (8 bits)
       ASCII Table: The characters are mapped to numbers by the ASCII table which
       are then represented in binary
    */

     /* Write a program that reads from the user a single character, and prints it's ASCII value.
        Example
        -------
        Please enter a character: T
        The ASCII value of T is 84
     */

     char inputChar;
     int asciiValue;

     cout << "Please enter a character: " << endl;
     cin >> inputChar;

  // asciiValue = inputChar;  this is an implicit cast that does not lose any accuracy
     asciiValue = (int)inputChar;

     cout << "The ASCII value of " << inputChar << " is " << asciiValue << endl;

     /* C++ Literals
        ------------
        These can be 'a', 'B', '$', '3'
        Shorthands: \n, \t, \\

        You cannot store a char without single quotes. Double quotes is for strings.
        int main() {
          char ch;

          ch = 'a';

          cout << 'b' << endl;

          return 0;
        }

        int main() {
          char ch;

          cout << '\n';
          cout << endl;

          ch = '\n';
          cout << ch;

          cout << "abc" << '\n'
          cout << "abc\n"; breaks the line and creates a new line

          return 0;
      }

        Arithmetic Operators
        --------------------
        +, -, %, /, *
        can add/subtract an int from an ascii value

        int main() {
          char ch1, ch2;

          ch1 = 'a';
          ch2 = 'a' + 1; implicit casting

          cout << ch2 << endl;
          cout << 'a' + 1 << endl;
          cout << (char)('a' + 1) << endl; explicit casting

          return 0;
      }

     */

     /* Write a program that reads from the user a lower case letter, and prints it's corresponding upper case letter.
        Exmaple
        -------
        Please enter a lower case letter: t
        The upper case of t is T
     */

        cout << endl;

        char lowerCaseLetter, upperCaseLetter;
        int offset;

        cout << "Please enter a lower case letter: " << endl;
        cin >> lowerCaseLetter;

        offset = (int)(lowerCaseLetter - 'a');
        upperCaseLetter = (char)('A' + offset);

        cout << "The upper case of " << lowerCaseLetter << " is " << upperCaseLetter << endl;

        /* Note: String is not a C++ built in type. To use it you need to have #include<string>

          Kind Of Data: Strings/Text
          Inner Representation: Sequence of characters(char)
          C++ Literals: "abc", "This is a string\n"...
          Arithmetic Operators: +, =

          #include<iostream>
          using namespace std;

            int main() {
              int x;
              double y;
              string s;

              x = 5;
              y = 7.3;
              s = "Hello";

              cout << s << endl;

              cout << s + " world" << endl; this is concatenating the two strings

              s = s + " world";
              cout << s << endl;

              return 0;
          }
        */

  return 0;
  }
