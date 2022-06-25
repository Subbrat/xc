// grater among four
#include <iostream>
using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a > b) {
    if (a > c) {
      if (a > d) {
        cout << a << " is grater";
      } else {
        cout << d << " is grater";
      }
    }
  }

  else if (b > c) {
    if (b > d) {
      cout << b << " is grater";

    }

    else {
      cout << d << " is grater";
    }
  }

  else {
    if (c > d) {
      cout << c << " is grater";
    }

    else {
      cout << d << " is grater";
    }
  }
}
