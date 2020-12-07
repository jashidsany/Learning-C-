#include <iostream>
#include <iomanip>

using namespace std;

int main (){

int choice;
  do {
    cout << "\nMake a selection between 1 - 3 > " << flush;
    cin >> choice;

    if(choice == 1) {
      cout << "\n\tYou picked Bulbasaur! " << endl;
    }
    else if(choice == 2) {
      cout << "\n\tYou picked Charmander! " << endl;
    }
    else if(choice == 3) {
      cout << "\n\tYou picked Squirtle! " << endl;
    }
    if(choice > 4) {
      cout << "\n\tInvalid selection! " << endl;
    }

  } while(choice > 4);


if(choice == 1) {
int choice2;
  do {
    cout << "\nMake a selection between 1 - 2 > " << flush;
    cin >> choice2;

    if(choice2 == 1) {
      cout << "\n\tYou picked a Potion! " << endl;
    }
    else if(choice2 == 2){
      cout << "\n\tYou picked a Pokeball! " << endl;
    }
    else {
      cout << "\n\tInvalid selection!" << endl;
    }
  } while(choice2 > 3);
}

if(choice == 2) {
int choice3;
  do {
    cout << "\nMake a selection between 1 - 2 > " << flush;
    cin >> choice3;

    if(choice3 == 1) {
      cout << "\n\tYou picked a Greatball! " << endl;
    }
    else if(choice3 == 2){
      cout << "\n\tYou picked a Hyper Potion! " << endl;
    }
    else {
      cout << "\n\tInvalid selection!" << endl;
    }
  } while(choice3 > 3);
}

if(choice == 3) {
int choice4;
  do {
    cout << "\nMake a selection between 1 - 2 > " << flush;
    cin >> choice4;

    if(choice4 == 1) {
      cout << "\n\tYou picked a Super Potion! " << endl;
    }
    else if(choice4 == 2){
      cout << "\n\tYou picked an Ultra Ball! " << endl;
    }
    else {
      cout << "\n\tInvalid selection!" << endl;
    }
  } while(choice4 > 3);
}

cout << "\nIt's time to continue your journey ..." << endl;

return 0;
}
