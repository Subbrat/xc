// checking if a number is divisible by 2 and 3 or 2 and or 3
#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a;
  if (a % 2 == 0 && a % 3 == 0) {
    cout << "divisible by 2 & 3";
  } else if (a % 2 == 0) {
    cout << "divisible by 2 only";
  } else if (a % 3 == 0) {
    cout << "divisible by 3 only";
  } else {
    cout << "not divisible by either 2 and or 3 ";
  }
}