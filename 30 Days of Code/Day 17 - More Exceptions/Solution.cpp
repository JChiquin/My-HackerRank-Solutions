// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class myException : public exception {
 public:
  myException() : exception() {}
  const char* what() const throw() { return "n and p should be non-negative"; }
};
class Calculator {
 public:
  Calculator() {}
  int power(int n, int p) throw(myException) {
    if (n < 0 or p < 0)
      throw myException();
    else {
      return pow(n, p);
    }
  }
};
int main() {
  Calculator myCalculator = Calculator();
  int T, n, p;
  cin >> T;
  while (T-- > 0) {
    if (scanf("%d %d", &n, &p) == 2) {
      try {
        int ans = myCalculator.power(n, p);
        cout << ans << endl;
      } catch (exception& e) {
        cout << e.what() << endl;
      }
    }
  }
}