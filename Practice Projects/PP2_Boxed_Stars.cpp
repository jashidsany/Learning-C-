#include <iostream>
using namespace std;

int main() {

  int j = 0;
  cout << "Enter a number from 1 to 15" << endl;
  cin >> j;

  for (int r = 1; r <= j; r++) {

    for(int c = 1; c <= j; c++) {
      cout << "*";
    }

    cout << endl;

  }



    return 0;
}
