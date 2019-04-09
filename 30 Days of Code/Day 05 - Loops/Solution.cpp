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
  int n;
  cin >> n;
  for (int i = 1; i <= 10; i++) {
    cout << n << " x " << i << " = " << i * n << endl;
  }
  return 0;
}
