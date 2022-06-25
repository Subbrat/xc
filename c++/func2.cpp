#include <cmath>
#include <iostream>
using namespace std;

bool primw(int num) {
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
    if (num == i) {
    }
  }
  return true;
}

int main() {
  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; i++) {
    if (primw(i)) {
      cout << i << endl;
    }
  }
  return 0;
}