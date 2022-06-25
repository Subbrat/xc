#include <iostream>
using namespace std;
int main() {
  float a, b;
  char op;
  cout << "enter 2 operands and operator in between them separated by space:  ";
  cin >> a >> op >> b;
  switch (op) {
    case '+':
      cout << a + b;
      break;
    case '-':
      cout << a - b;
      break;
    case '*':
      cout << a * b;
      break;
    case '/':
      cout << a / b;
      break;
    default:
      cout << "try again!" << endl;
      main();
      break;
  }
}