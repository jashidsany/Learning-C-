#include <iostream>

using namespace std;

  int main() {

    cout << "This 20XX vending machine has 9 drinks and 5 snacks..." << endl;
    cout << "======================================================" << endl;
    cout << "1: Coke " << endl;
    cout << "2: Sprite " << endl;
    cout << "3: Dr.Pepper " << endl;
    cout << "4: Mountain Dew " << endl;
    cout << "5: 7-Up " << endl;
    cout << "6: Ginger Ale " << endl;
    cout << "7: Pepsi " << endl;
    cout << "8: Fanta " << endl;
    cout << "9: Water " << endl;
    cout << "10: Move on to snacks " << endl;
    cout << "11: Turn off vending machine " << endl;

  int drink;
  cout << "\nPlease make a selection from 1 - 11 > " << flush;
  cin >> drink;

 while(drink > 11) {
   cout << "\nPlease make a selection from 1 - 11 > " << flush;
   cin >> drink;
 }

  if(drink == 11) {
    cout << "\n=( turning off vending machine..." << endl;
  }

else if(drink <= 10) {

    switch(drink) {
      case 1:
        cout << "\nYou have selected a Coke! " << endl;
          break;
      case 2:
        cout << "\nYou have selected a Sprite! " << endl;
          break;
      case 3:
        cout << "\nYou have selected a Dr.Pepper! " << endl;
          break;
      case 4:
        cout << "\nYou have selected a Mountain Dew! " << endl;
          break;
      case 5:
        cout << "\nYou have selected a 7-Up! " << endl;
          break;
      case 6:
        cout << "\nYou have selected a Ginger Ale! " << endl;
          break;
      case 7:
        cout << "\nYou have selected a Pepsi! " << endl;
          break;
      case 8:
        cout << "\nYou have selected a Fanta! " << endl;
          break;
      case 9:
        cout << "\nYou have selected a Water!" << endl;
          break;
      case 10:
        cout << "\nYou have selected to move onto snacks! " << endl;
      }

      int choice;

      cout << "\n======================================================" << endl;
      cout << "\nWould you like a snack? " << endl;
      cout << "\n1 for Yes\t2 for No" << endl;
      cout << endl;
      cin >> choice;

      while(choice > 2) {
        cout << "\nInvalid selection, please choose again! " << endl;
        cout << "\n1 for Yes\t2 for No" << endl;
        cout << endl;
        cin >> choice;
      }

      if(choice == 2) {
        cout << "\n======================================================" << endl;
        cout << "\n=( turning off vending machine..." << endl;
      }

     else if(choice == 1) {
          cout << "\n======================================================" << endl;
          cout << "\nYay! =) ...Please choose from these 5 snacks! Or choose 6 to turn off the vending machine..." << endl;
          cout << endl;
          cout << "1: Fried Cheetos " << endl;
          cout << "2: Snickers " << endl;
          cout << "3: Gummy Worms " << endl;
          cout << "4: Trail Mix " << endl;
          cout << "5: Cut Apples " << endl;
          cout << "6: Turn off vending machine " << endl;

      int snack;
      cout << "\nPlease make a selection from 1 - 6 > " << flush;
      cin >> snack;

      while(snack > 6) {
        cout << "\nPlease make a selection from 1 - 6 > " << flush;
        cin >> snack;
      }

      switch(snack) {
        case 1:
          cout << "\nYou have selected Fried Cheetos! Have a good day! " << endl;
            break;
        case 2:
          cout << "\nYou have selected Snickers! Have a good day!" << endl;
            break;
        case 3:
          cout << "\nYou have selected Gummy Worms! Have a good day!" << endl;
            break;
        case 4:
          cout << "\nYou have selected Trail Mix! Have a good day!" << endl;
            break;
        case 5:
          cout << "\nYou have selected Cut Apples! Have a good day!" << endl;
            break;
        case 6:
          cout << "\nTurning off vending machine..." << endl;
            break;
      }
   }
}

    return 0;
  }
