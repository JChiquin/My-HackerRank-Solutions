// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N % 2 or (N >= 6 and N <= 20))
    cout << "Weird";
  else
    cout << "Not Weird";
  return 0;
}
