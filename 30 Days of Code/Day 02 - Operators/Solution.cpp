// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  double total;
  int tip, tax;
  cin >> total >> tip >> tax;
  total += total * (tip + tax) / 100;
  cout << "The total meal cost is " << round(total) << " dollars.";
  return 0;
}
