// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string S;
  int size;
  cin.ignore(256, '\n');
  while (getline(cin, S)) {
    size = S.size();
    for (int i = 0; i < size; i += 2) {
      cout << S[i];
    }
    cout << ' ';
    for (int i = 1; i < size; i += 2) {
      cout << S[i];
    }
    cout << endl;
  }
  return 0;
}
