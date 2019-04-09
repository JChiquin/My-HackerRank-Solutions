
// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic {
 public:
  virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic {
 public:
  int divisorSum(int n) {
    int sum = n;
    for (int i = 1; i <= n / 2; i++)
      if (!(n % i))
        sum += i;
    return sum;
  }
};
int main() {
  int n;
  cin >> n;
  AdvancedArithmetic* myCalculator = new Calculator();
  int sum = myCalculator->divisorSum(n);
  cout << "I implemented: AdvancedArithmetic\n" << sum;
  return 0;
}

Format!Style:
C++ online code formatter © 2014 by KrzaQ

Powered by vibe.d, the D language and clang-format