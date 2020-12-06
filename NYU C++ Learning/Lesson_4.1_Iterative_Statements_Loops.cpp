#include <iostream>

using namespace std;

  int main() {

    /* While Loops Syntax
       ------------------
       while(condition) {
       }
       While Loops
       -----------
       - First thing that happenes is the condition is evaluated.
       - If condition is true body is exectued and condition is evaluated
       - If condition is false program will continue
       - Better to use if we don't know how many iterations we will have

       For Loops Syntax
       ----------------
       for(initiliaztion; condition; increment) {
     }
       For Loops
       ---------
       - Initiliaztion is executed
       - Then the condition is evaluated, checks if true or false
       - If condition is true, the body is executed and then the increment is evaluated
       - If false the for loop ends and moves onto the rest of the code

       Counting And Summing Digits
       ---------------------------
       Example: 375 / 10 = 37 Remainder 5
                375 mod 10 = 5
                375 div 10 = 37
    */


    /* Write a program that reads a positive integer n, and prints the numbers
       from 1 up to n.
       Example
       -------
       Please enter a positive integer: 4
       Output: 1
               2
               3
               4
    */

    int n;
    int counter;

    cout << "Please enter a positive integer: " << flush;
    cin >> n;

    counter = 1;

    while(n >= counter) {
      cout << counter << endl;
      counter++;
    }

    /* Write a program that reads a positive integer n, and prints the numbers from 1
       up to n.
       Example
       -------
       Please enter a positive integer: 4
       Output: 1
               2
               3
               4
    */

    cout << endl;

    int n1;
    int counter1;

    cout << "Please enter a positive integer: " << flush;
    cin >> n1;

    for(counter1 = 1; counter1 <= n1; counter1++) {
      cout << counter1 << endl;
    }

    /* Write a program that reads a positive integer num, and prints the numbers
       of digits in num and their sum.
       Example
       -------
       Please enter a positive integer: 375
       Output: 375 has 3 digits and their sum is 15
    */

    cout << endl;

    int num;
    int sumDigits, countDigits;
    int currDigit;

    cout << "Please enter a positive integer: " << flush;
    cin >> num;

    sumDigits = 0;
    countDigits = 0;

    while(num > 0) {
      currDigit = num%10;
      countDigits++;
      sumDigits += currDigit;
      num = num/10;
    }

    cout << num << " has " << countDigits << " Digits";
    cout << " and their sum is " << sumDigits << endl;

    /* Write a program that reads the grades of students in a class, and prints the average.
       Example
       -------
       Please enter the number of students in the class: 4
       Please enter the student's grades (separated by a space): 71, 86, 68, 94
       Output: The class average is 79.75
    */

    cout << endl;

    int numOfStudents;
    int count;
    int curr, sum;
    double average;

    cout << "Please enter the number of students in class: " << flush;
    cin >> numOfStudents;

    cout << "Please the student's grades (separate by a space): " << flush;

    sum = 0;

    for(count = 1; count <= numOfStudents; count++) {
      cin >> curr;
      sum += curr;
    }

    average = (double)sum / (double)numOfStudents;
    cout << "The average is " << average << endl;

    /* Write a program that reads a sequence of grades (till -1 is entered), and prints
       the average.
       Example
       -------
       Enter the grades separated by a space. End your sequence by typing -1: 71 86 68 94 -1
       Output: The class average is 79.75
    */

    cout << endl;

    bool seenEndOfInput;
    int sum1, numOfStudents1;
    int curr1;
    double average1;

    cout << "Enter the grades separated by a space. " << flush;
    cout << "End the sequence by typing -1: " << flush;

    sum1 = 0;
    numOfStudents1 = 0;

    seenEndOfInput = false;

    while(seenEndOfInput == false) {
      cin >> curr1;

      if(curr1 == -1) {
        seenEndOfInput = true;
      }
      else {
        sum1 += curr1;
        numOfStudents1++;
      }

    }

    average1 = (double)sum1 / (double)numOfStudents1;

    cout << "The class average is " << average1 << endl;

  return 0;
  }
