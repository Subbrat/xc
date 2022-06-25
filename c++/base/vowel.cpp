#include <iostream>
using namespace std;
int main() {
  char a, alpcap, alpsml;
  cin >> a;
  alpsml = 'a', 'e', 'i', 'o', 'u';
  alpcap = 'A', 'E', 'I', 'O', 'U';
  if (a == alpsml || a == alpcap) {
    cout << "vowel";

  } else {
    cout << "con";
  }
}