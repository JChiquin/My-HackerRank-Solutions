// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

double const PI = acos(-1.0);

double acumulativeN(double x, double mean, double dev) {
  return 1.00 / 2 * (1.00 + erf((x - mean) / (dev * sqrt(2))));
}

int main() {
  double mean, dev, A, B;
  cin >> mean >> dev;
  cin >> A >> B;
  double Q1 = 1.00 - acumulativeN(A, mean, dev);
  double Q3 = acumulativeN(B, mean, dev);
  double Q2 = 1.00 - Q3;
  cout << fixed << setprecision(2) << Q1 * 100 << endl
       << Q2 * 100 << endl
       << Q3 * 100;
  return 0;
}
