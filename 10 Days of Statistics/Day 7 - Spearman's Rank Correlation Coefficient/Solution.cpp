// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  double num;
  vector<double> X(n);
  vector<double> Y(n);
  for (int i = 0; i < n; i++)
    cin >> X[i];
  for (int i = 0; i < n; i++)
    cin >> Y[i];
  vector<double> cX(X);
  vector<double> cY(Y);
  sort(cX.begin(), cX.end());
  sort(cY.begin(), cY.end());
  double acum = 0.00;
  for (int i = 0; i < n; i++) {
    int rx = find(cX.begin(), cX.end(), X[i]) - cX.begin();
    int ry = find(cY.begin(), cY.end(), Y[i]) - cY.begin();
    acum += pow(rx - ry, 2);
  }
  cout << setprecision(3) << fixed << (1.0 - 6.0 * acum / (pow(n, 3) - n));
  return 0;
}
