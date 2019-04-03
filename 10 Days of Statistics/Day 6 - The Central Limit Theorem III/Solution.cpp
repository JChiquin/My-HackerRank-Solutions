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
  double mean, dev, N, p, z;
  cin >> N >> mean >> dev >> p >> z;
  mean *= N;
  dev *= sqrt(N);
  double B = mean + dev * z;
  double A = mean - dev * z;
  cout << fixed << setprecision(4) << A / 100 << endl << B / 100;
  return 0;
}
