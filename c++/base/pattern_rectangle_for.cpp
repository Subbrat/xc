#include <iostream>
using namespace std;
int row, col;
int full_rect() {
  cin >> row >> col;
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      cout << "*\t";
    }
    cout << "\n";
  }
  return 1;
}
int hollow_rect() {
  cin >> row >> col;
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      if (i == 1 || i == row || j == 1 || j == col) {
        cout << "*\t";
      } else {
        cout << "\t";
      }
    }
    cout << "\n";
  }
  return 1;
}

int main() {
  char a;
  cout << "1.Fullrect" << endl << "2.hollowrect" << endl;
  cout << "\t";
  cin >> a;
  switch (a) {
    case '1':
      full_rect();
      break;
    case '2':
      hollow_rect();
      break;
    default:
      break;
  }
}
