// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double g(double p, double q, int n) {
  return pow(q, n - 1) * p;
}

int main() {
  double a, b;
  int n;
  cin >> a >> b >> n;
  double p = a / b;
  cout << fixed << setprecision(3) << g(p, 1 - p, n);
  return 0;
}
