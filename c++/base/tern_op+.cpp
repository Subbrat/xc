#include <iostream>
using namespace std;
int a, b;
int main() {
  cin >> a;

  a % 2 == 0         ? (a + 10) % 10 == 0 ? cout << "mul(10)" : cout << "mul(2)"
  : (a + 3) % 3 == 0 ? cout << "mul(3)"
                     : cout << "mul(1)";

  return 0;
}