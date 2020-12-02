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

    if(value < 3) {
      cout << "Insufficient Privileges" << endl;
    }
    else {
      cout << "Sufficient Privilengs" << endl;
    }

    if(value == 5) {
      cout << "Quitting..." << endl;
    }
    else {
      cout << "Not Quitting..." << endl;
    }

  return 0;
  }
