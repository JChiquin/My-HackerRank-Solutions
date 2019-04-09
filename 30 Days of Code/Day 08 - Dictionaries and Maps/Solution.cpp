// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, string> directorio;
  string nombre, tlf;
  while (n--) {
    cin >> nombre >> tlf;
    directorio.insert(make_pair(nombre, tlf));
  }
  while (cin >> nombre) {
    map<string, string>::iterator p = directorio.find(nombre);
    if (p != directorio.end())
      cout << p->first << "=" << p->second;
    else
      cout << "Not found";
    cout << endl;
  }
  return 0;
}
