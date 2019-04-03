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

int main() {
  double meanA, meanB;
  cin >> meanA >> meanB;
  double dailyCostA = 160 + 40 * (meanA + pow(meanA, 2));
  double dailyCostB = 128 + 40 * (meanB + pow(meanB, 2));
  cout << fixed << setprecision(3) << dailyCostA << endl << dailyCostB;
  return 0;
}
