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

long long int factorial(int k) {
  long long int fact = k;
  while (--k > 1) {
    fact *= k;
  }
  return fact;
}

double P(int k, double mean) {
  return pow(mean, k) * exp(-mean) / factorial(k);
}

int main() {
  double mean;
  int k;
  cin >> mean >> k;
  cout << setprecision(3) << P(k, mean);
  return 0;
}
