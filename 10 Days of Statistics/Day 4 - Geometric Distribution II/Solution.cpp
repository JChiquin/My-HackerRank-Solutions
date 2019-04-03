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
  double answer = 0.00;
  for (int i = 0; i < 5; i++)
    answer += g(p, 1 - p, i + 1);
  cout << fixed << setprecision(3) << answer;
  return 0;
}
