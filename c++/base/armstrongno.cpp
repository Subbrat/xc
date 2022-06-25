#include <math.h>

#include <iostream>

using namespace std;
int main() {
  int n, sum;
  cin >> n;
  int orn = n;
  while (n > 0) {
    int ldn = n % 10;
    sum += pow(ldn, 3);
    n = n / 10;
  }

  orn == sum ? cout << "y" : cout << "n";
}