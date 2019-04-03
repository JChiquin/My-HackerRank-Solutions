// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int& i : x)
        cin >> i;
    sort(x.begin(), x.end());
    int mitad = n / 2;
    int mitad2 = mitad / 2;
    cout << (mitad % 2 ? x[mitad2] : (x[mitad2] + x[mitad2 - 1]) / 2) << endl;
    cout << (n % 2 ? x[mitad] : (x[mitad] + x[mitad - 1]) / 2) << endl;
    cout << (mitad % 2 ? x[mitad2 + mitad] : (x[mitad2 + mitad] + x[mitad2 + mitad + (mitad2 % 2 ? -1 : 1)]) / 2) << endl;
    return 0;
}
