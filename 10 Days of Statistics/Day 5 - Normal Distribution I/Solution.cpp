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
  double mean, dev, A, B1, B2;
  cin >> mean >> dev;
  cin >> A >> B1 >> B2;
  double Q1 = acumulativeN(A, mean, dev);
  double Q2 = acumulativeN(B2, mean, dev) - acumulativeN(B1, mean, dev);
  cout << fixed << setprecision(3) << Q1 << endl << Q2;

  return 0;
}
