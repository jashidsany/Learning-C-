#include <iostream>

using namespace std;

  int main() {

    int accessAlphabet, letter;
    
    cout << "Note: At any point you can type 999 to close the program..." << endl;
    cout << "Would you like to access the Spanish Alphabet? Press 1 for Yes and 0 for No: " << flush;
    cin >> accessAlphabet;
    cout << endl;

    if(accessAlphabet == 1) {
      cout << "\t\tThe Spanish Alphabet!" << endl;
      cout << "============================================================" << endl;
      cout << "01: A" << endl;
      cout << "02: B" << endl;
      cout << "03: C" << endl;
      cout << "04: D" << endl;
      cout << "05: E" << endl;
      cout << "06: F" << endl;
      cout << "07: G" << endl;
      cout << "08: H" << endl;
      cout << "09: I" << endl;
      cout << "10: J" << endl;
      cout << "11: K" << endl;
      cout << "12: L" << endl;
      cout << "13: M" << endl;
      cout << "14: N" << endl;
      cout << "15: N w/ Accent" << endl;
      cout << "16: O" << endl;
      cout << "17: P" << endl;
      cout << "18: Q" << endl;
      cout << "19: R" << endl;
      cout << "20: S" << endl;
      cout << "21: T" << endl;
      cout << "22: U" << endl;
      cout << "23: V" << endl;
      cout << "24: W" << endl;
      cout << "25: X" << endl;
      cout << "26: Y" << endl;
      cout << "27: Z" << endl;
      cout << "Please choose a letter by typing it's corresponding number to see how it is spelled in Spanish: " << flush;
      cin >> letter;

        while(letter > 27 || letter < 1) {
          if(letter == 999) {
            break;
          }
            cout << "\nInvalid selection!" << endl;
            cout << "\nPlease choose a letter by typing it's corresponding number to see how it is spelled out in Spanish: " << flush;
            cin >> letter;
          if(letter == 999) {
            break;
          }
        }

        cout << endl;
        cout << "=======================================================================================================================" << endl;

      switch(letter) {
        case 1:
            if(letter = 1 )
            cout << "A in Spanish is A\n" << endl;
            break;
        case 2:
            if(letter = 2)
            cout << "B in Spanish is Be\n" << endl;
            break;
        case 3:
            if(letter = 3)
            cout << "C in Spanish is Ce\n" << endl;
            break;
        case 4:
            if(letter = 4)
            cout << "D in Spanish is De\n" << endl;
            break;
        case 5:
            if(letter = 5)
            cout << "E in Spanish is E\n" << endl;
            break;
        case 6:
            if(letter = 6)
            cout << "F in Spanish is Efe\n" << endl;
            break;
        case 7:
            if(letter = 7)
            cout << "G in Spanish is Ge\n" << endl;
            break;
        case 8:
            if(letter = 8)
            cout << "H in Spanish is Hache\n" << endl;
            break;
        case 9:
            if(letter = 9)
            cout << "I in Spanish is I\n" << endl;
            break;
        case 10:
            if(letter = 10)
            cout << "J in Spanish is Jota\n" << endl;
            break;
        case 11:
            if(letter = 11)
            cout << "K in Spanish is Ka\n" << endl;
            break;
        case 12:
            if(letter = 12)
            cout << "L in Spanish is Ele\n" << endl;
            break;
        case 13:
            if(letter = 13)
            cout << "M in Spanish is Eme\n" << endl;
            break;
        case 14:
            if(letter = 14)
            cout << "N in Spanish is Ene\n" << endl;
            break;
        case 15:
            if(letter = 15)
            cout << "Ñ in Spanish is Eñe\n" << endl;
            break;
        case 16:
            if(letter = 16)
            cout << "O in Spanish is O\n" << endl;
            break;
        case 17:
            if(letter = 17)
            cout << "P in Spanish is Pe\n" << endl;
            break;
        case 18:
            if(letter = 18)
            cout << "Q in Spanish is Cu\n" << endl;
            break;
        case 19:
            if(letter = 19)
            cout << "R in Spanish is Erre\n" << endl;
            break;
        case 20:
            if(letter = 20)
            cout << "S in Spanish is Ese\n" << endl;
            break;
        case 21:
            if(letter = 21)
            cout << "T in Spanish is Te\n" << endl;
            break;
        case 22:
            if(letter = 22)
            cout << "U in Spanish is U\n" << endl;
            break;
        case 23:
            if(letter = 23)
            cout << "V in Spanish is Uve\n" << endl;
            break;
        case 24:
            if(letter = 24)
            cout << "W in Spanish is Uve Doble\n" << endl;
            break;
        case 25:
            if(letter = 25)
            cout << "X in Spanish is Equis\n" << endl;
            break;
        case 26:
            if(letter = 26)
            cout << "Y in Spanish is Y Griega/Ye\n" << endl;
            break;
        case 27:
            if(letter = 27)
            cout << "Z in Spanish is Zeta\n" << endl;
            break;
        default:
            break;
      }
    }

      else if(accessAlphabet != 1 || accessAlphabet == 0 || accessAlphabet == 999) {
      }

      cout << "Closing Program..." << endl;

    return 0;
  }
