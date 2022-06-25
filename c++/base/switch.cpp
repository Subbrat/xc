#include <iostream>
using namespace std;
int main() {
  char usin;
  cin >> usin;
  // case can have only one digit
  switch (usin) {
    case 'a':
      cout << "body";
      break;
    case 'b':
      cout << "head";
      break;
    default:
      cout << "none";
      break;
  }
}