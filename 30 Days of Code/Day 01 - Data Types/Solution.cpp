// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";

  int ni;
  double nd;
  string ns;
  cin >> ni >> nd;
  cin.ignore();
  getline(cin, ns);
  cout << i + ni << endl
       << setiosflags(ios::fixed) << setprecision(1) << d + nd << endl
       << s + ns;

  return 0;
}