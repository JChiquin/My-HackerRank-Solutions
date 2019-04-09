// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  string S;
  cin >> S;
  int dato;
  try {
    cout << stoi(S);
  } catch (...) {
    cout << "Bad String";
  }
  return 0;
}