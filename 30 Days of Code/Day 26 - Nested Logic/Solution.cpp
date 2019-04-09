// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <iostream>
using namespace std;

int main() {
  int Ye, Ya, Me, Ma, De, Da;
  cin >> Da >> Ma >> Ya >> De >> Me >> Ye;
  if (Ya - Ye < 0)
    cout << 0;
  else if (Ya - Ye > 0)
    cout << 10000;
  else if (Ma - Me > 0)
    cout << (Ma - Me) * 500;
  else if (Da - De > 0)
    cout << (Da - De) * 15;
  else
    cout << 0;
  return 0;
}
