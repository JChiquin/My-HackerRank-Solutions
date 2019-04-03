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

vector<long long int> dp(10, 0);
int xdp = 2;
long long int factorial(int n) {
  if (!dp[n])
    for (; xdp <= n; xdp++)
      dp[xdp] = xdp * dp[xdp - 1];
  return dp[n];
}

long long int combinatoria(int n, int x) {
  return factorial(n) / (factorial(x) * factorial(n - x));
}

double B(int n, int x, double p, double q) {
  return combinatoria(n, x) * pow(p, x) * pow(q, n - x);
}

int main() {
  dp[1] = dp[0] = 1;
  double p;
  int n;
  cin >> p >> n;
  p /= 100;
  double q = 1 - p;
  double acum = 0.00;
  for (int x = 0; x < 2; x++)
    acum += B(n, x, p, q);
  cout << fixed << setprecision(3) << acum + B(n, 2, p, q) << endl
       << 1.00 - acum;
  return 0;
}
