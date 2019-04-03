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

int main() {
  dp[1] = dp[0] = 1;
  double A, B;
  cin >> A >> B;
  double p = A / (A + B);
  double q = 1 - p;
  double acum = 0.00;
  for (int i = 0; i < 3; i++)
    acum += combinatoria(6, i) * pow(p, i) * pow(q, 6 - i);
  cout << fixed << setprecision(3) << 1.00 - acum;
  return 0;
}
