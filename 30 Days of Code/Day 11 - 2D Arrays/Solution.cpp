// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <vector>
#include <iostream>
using namespace std;

int main() {
  vector<vector<int> > arr(6, vector<int>(6));
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j];
    }
  }
  int suma = 0, mayor = -9 * 7;
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) {
      suma = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
      suma += arr[i + 1][j + 1];
      suma += arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
      if (suma > mayor)
        mayor = suma;
    }
  cout << mayor;
  return 0;
}
