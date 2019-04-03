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
  double mean, dev, pounds, N;
  cin >> pounds >> N >> mean >> dev;
  double Q1 = acumulativeN(pounds, N * mean, sqrt(N) * dev);
  cout << fixed << setprecision(4) << Q1;
  return 0;
}
