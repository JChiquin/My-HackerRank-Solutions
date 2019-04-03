// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int N, F;
    cin >> N;
    vector<int> X(N);
    for (int& i : X)
        cin >> i;

    for (int i = 0; i < N; i++) {
        cin >> F;
        while (--F)
            X.push_back(X[i]);
    }
    sort(X.begin(), X.end());
    int mitad = X.size() / 2;
    int mitad2 = mitad / 2;
    double Q3 = (mitad % 2 ? X[mitad2 + mitad + (mitad2 % 2 ? 1 : -1)] : (X[mitad2 + mitad] + X[mitad2 + mitad + (mitad2 % 2 ? -1 : 1)]) / 2);
    double Q1 = (mitad % 2 ? X[mitad2] : (X[mitad2] + X[mitad2 - 1]) / 2);
    cout << setprecision(1) << fixed << Q3 - Q1 << endl;
    return 0;
}
