#include <cmath>
#include <iostream>
using namespace std;
// int main() {
//   int i, n;
//   cin >> n;
//   for (i = 2; i < n; i++) {
//     if (n % i == 0) {
//       cout << "n prime";
//       break;
//     }
//   }
//   if (n == i) {
//     cout << "prime";
//   }
// }

int main() {
  int n, i;
  bool flag = 0;
  cin >> n;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      cout << "np";
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    cout << "prime";
  }
}