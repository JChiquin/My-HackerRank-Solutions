// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> X(N), W(N);
    for (auto& i : X)
        cin >> i;
    for (auto& i : W)
        cin >> i;
    cout << setprecision(1) << fixed << inner_product(X.begin(), X.end(), W.begin(), 0.0) / accumulate(W.begin(), W.end(), 0.0);
    return 0;
}
