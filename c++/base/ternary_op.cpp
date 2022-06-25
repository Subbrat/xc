#include <iostream>
using namespace std;
int main() {
  int pass = 1122, usin, c;
  cin >> usin;
  usin == pass ? cout << "logedin" << endl : cout << "failed" << endl;
  cout << &(usin) << endl << &(pass);
}