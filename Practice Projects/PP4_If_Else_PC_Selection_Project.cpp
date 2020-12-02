#include <iostream>
#include <string>

using namespace std;

  int main() {

    cout << "What kind of PC do you want? Press 1 to continue. > " << flush;
    int value;
    cin >> value;

    if(value == 1) {
      cout << "Moving on...\n" << endl;
    }
    else {
      cout << "Invalid, shutting down application..." << endl;
    }

    cout << "1) Dell" << endl;
    cout << "2) Lenovo" << endl;
    cout << "3) HP" << endl;
    cout << "4) Asus" << endl;
    cout << "5) Acer" << endl;
    cout << "Please make a selection. > " << flush;
    int choice;
    cin >> choice;


    if(choice == 1) {
      cout << "\nYou have chosen Dell." << endl;
    }
    else if(choice == 2) {
      cout << "\nYou have chosen Lenovo" << endl;
    }
    else if(choice == 3) {
      cout << "\nYou have chosen HP" << endl;
    }
    else if(choice == 4) {
      cout << "\nYou have chosen Asus" << endl;
    }
    else if(choice == 5) {
      cout << "\nYou have chosen Acer" << endl;
    }

    cout << "\nPlease choose a pick-up day between the 1st and 30th of November. > " << flush;
    int pick;
    cin >> pick;

    cout << "\nConfirmed pick-up day as November " << pick << endl;


  return 0;
  }
