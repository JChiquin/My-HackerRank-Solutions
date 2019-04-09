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
  int n, cant = 0, mayor = 1;
  cin >> n;
  do {
    n % 2 ? cant++ : cant = 0;
    if (cant > mayor)
      mayor = cant;
  } while (n /= 2);
  cout << mayor;
  return 0;
}
