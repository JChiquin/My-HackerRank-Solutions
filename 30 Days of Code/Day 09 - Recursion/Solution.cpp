// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <iostream>
using namespace std;

long long factorial(int& N) {
  return (N < 2 ? 1 : N * factorial(--N));
}

int main() {
  int N;
  cin >> N;
  cout << factorial(N);
  return 0;
}