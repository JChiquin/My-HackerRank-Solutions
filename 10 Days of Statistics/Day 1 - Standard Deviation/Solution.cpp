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

double media(vector<int> &x) {
  int acum = 0;
  for (int &i : x)
    acum += i;
  return acum / x.size();
}

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  for (int &i : x)
    cin >> i;
  double md = media(x);
  double acum = 0.0;
  for (int &i : x)
    acum += pow(i - md, 2);
  cout << setprecision(1) << fixed << sqrt(acum / n);
  return 0;
}
