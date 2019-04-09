// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printInput(bool q) {
  int n, k, tope;
  n = 10 + rand() % (200 + 1 - 10);
  k = 3 + rand() % ((n - 3) + 1 - 3);
  printf("%i %i\n", n, k);
  printf("%i %i %i ", 0, -1 * (1 + rand() % (1000 + 1 - 1)),
         1 + rand() % (1000 + 1 - 1));
  tope = n - k;
  n -= 3;
  if (q) {
    for (int i = 0; i < tope; i++)
      printf("%i ", 1 + rand() % (1000 + 1 - 1));
    n -= tope;
  } else {
    for (int i = 0; i < k - 2; i++)
      printf("%i ", -1 * (0 + rand() % (1000 + 1 - 0)));
    n = n - (k - 2);
  }
  for (int i = 0; i < n; i++)
    printf("%i ", rand() % (2001) - 1000);
  printf("\n");
}

int main() {
  srand(time(0));
  int T = 5;
  printf("%i\n", T);
  while (T)
    printInput(T-- % 2);
  return 0;
}
