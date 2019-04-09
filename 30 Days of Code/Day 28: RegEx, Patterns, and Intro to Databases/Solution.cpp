// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  cin.ignore();
  vector<string> names;
  string name, ID;
  char str[80];
  while (N--) {
    cin.getline(str, 80);
    name = strtok(str, " @");
    strtok(NULL, " @");
    if (!strcmp(strtok(NULL, " @"), "gmail.com"))
      names.push_back(name);
  }
  sort(names.begin(), names.end());
  int size = names.size();
  for (int i = 0; i < size; i++)
    cout << names[i] << endl;
  return 0;
}
