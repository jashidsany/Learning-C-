#include <iostream>

using namespace std;

  int main() {

    cout << "1. \tAdd New Record." << endl;
    cout << "2. \tDelete Record." << endl;
    cout << "3. \tView Record." << endl;
    cout << "4. \tSearch Record." << endl;
    cout << "5. \tQuit." << endl;

    cout << "Enter Your Selection > " << flush;

    int value;
    cin >> value;

    if(value == 1) {
      cout << "Adding new record" << endl;
    }
    else if(value == 2) {
      cout << "Deleting record" << endl;
    }
    else if(value == 3) {
      cout << "View Record" << endl;
    }
    else if(value == 4) {
      cout << "Search Record" << endl;
    }
    else if(value == 5) {
      cout << "Quit" << endl;
    }
    else {
      cout << "Invalid option." << endl;
    }




  return 0;
  }
