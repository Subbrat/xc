#include <iostream>
using namespace std;
int invert_tri() {
  int row;
  cin >> row;
  for (int i = row; i >= 1; i--) {
    for (int j = 1; j <= row; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

int main() {
  int row;
  cin >> row;
  for (int i = 1; i <= row; i++) {
    for (int j = row; j <= row; j--) {
      cout << "*";
      cout << endl;
    }
  }
}