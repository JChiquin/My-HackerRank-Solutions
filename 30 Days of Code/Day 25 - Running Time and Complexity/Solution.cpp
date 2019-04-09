// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int root, n;
  bool prime;
  scanf("%i", &n);  // Ignoring T
  while (scanf("%i", &n) == 1) {
    root = sqrt(n);
    prime = (n % 2 && n != 1) || n == 2;
    for (int i = 3; i <= root and prime; i += 2)
      prime = n % i;
    printf(prime ? "Prime\n" : "Not prime\n");
  }
  return 0;
}
