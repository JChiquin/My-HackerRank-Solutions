// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
using namespace std;

double mean(vector<double>& x) {
  return accumulate(x.begin(), x.end(), 0.00) / x.size();
}

double sddev(vector<double>& x) {
  double meanX = mean(x);
  double acum = 0.00;
  double N = x.size();
  for (auto& i : x)
    acum += pow(i - meanX, 2);
  return sqrt(acum / N);
}

double cov(vector<double>& x, vector<double>& y) {
  int N = x.size();
  long double acum = 0.00;
  for (int i = 0; i < N; i++)
    for (int j = i + 1; j < N; j++)
      acum += (x[i] - x[j]) * (y[i] - y[j]);
  return acum / pow(N, 2);
}

double Pxy(vector<double>& x, vector<double>& y) {
  return cov(x, y) / (sddev(x) * sddev(y));
}

int main() {
  int n;
  cin >> n;
  vector<double> X(n);
  vector<double> Y(n);
  for (int i = 0; i < n; i++)
    cin >> X[i];
  for (auto& i : Y)
    cin >> i;
  cout << setprecision(3) << fixed << Pxy(X, Y);
  return 0;
}
