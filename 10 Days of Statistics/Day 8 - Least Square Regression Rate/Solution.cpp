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

double linear(double a, double b, double x) {
  return a + b * x;
}

int main() {
  vector<double> X(5);
  vector<double> Y(5);
  for (int i = 0; i < 5; i++)
    cin >> X[i] >> Y[i];
  double b = Pxy(X, Y) * (sddev(Y) / sddev(X));
  double a = mean(Y) - b * mean(X);
  cout << setprecision(4) << fixed << linear(a, b, 80.0);

  return 0;
}
