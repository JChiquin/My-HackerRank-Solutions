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
  int N, numberOfSwaps = 0;
  cin >> N;
  int* a = new int[N];

  for (int i = 0; i < N; i++)
    cin >> a[i];
  for (int i = 0, numberOfSwapsPerLoop = 0; i < N;
       i++, numberOfSwapsPerLoop = 0) {
    for (int j = 0; j < N - 1 - i; j++)
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        numberOfSwapsPerLoop++;
      }
    if (!numberOfSwapsPerLoop)
      break;
    numberOfSwaps += numberOfSwapsPerLoop;
  }
  printf("Array is sorted in %i swaps.\n", numberOfSwaps);
  printf("First Element: %i\n", a[0]);
  printf("Last Element: %i", a[N - 1]);

  return 0;
}
