// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int a0 = 0; a0 < t; a0++) {
    int n;
    int k;
    cin >> n >> k;
    int bitwise = 0;
    int mayor = 0;
    for (int a = 1; a < n and bitwise != k - 1; a++)
      for (int b = a + 1; b <= n and bitwise != k - 1; b++) {
        bitwise = a & b;
        if (bitwise < k and bitwise > mayor)
          mayor = bitwise;
      }
    printf("%i\n", mayor);
  }
  return 0;
}
