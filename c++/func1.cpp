#include <iostream>
using namespace std;

void mod(int x, int y) {
  int num;
  num = x % y;
  cout << num;
  return;
}
void mul(int x, int y) {
  int num;
  num = x * y;
  cout << num;
  return;
}
void subt(int x, int y) {
  int num;
  num = x - y;
  cout << num;
  return;
}
void add(int x, int y) {
  int num;
  num = x + y;
  cout << num;
  return;
}

int main() {
  int a, b;
  cin >> a >> b;
  add(a, b);
  subt(a, b);
  mul(a, b);
  mod(a, b);

  return 0;
}

// name_of_func_1(declaring_type_of_recieving_values) {
//   //
//   return;
// }
// name_of_func_1(sending values)
// only value is sent, data type isn't sent, that needed to be recognised in
// recieving func