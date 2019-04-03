// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	int n;
	double mean, median, mode;
	cin >> n;
	vector<int> X(n);
	for (auto&i : X)
		cin >> i;
	mean = accumulate(X.begin(), X.end(), 0) / double(n);
	sort(X.begin(), X.end());
	median = X[int(n / 2)];
	if (n % 2 == 0)
		median = (median + X[n / 2 - 1]) / 2;
	int count = 1, mayor = 1, mayori = 0;
	for (int i = 1; i < n; i++)
		if (X[i - 1] == X[i])
			count++;
		else if (count > mayor) {
			mayor = count;
			mayori = i - 1;
		} else
			count = 1;

	cout << setiosflags(ios::fixed) << setprecision(1) << mean << endl << median
			<< endl << X[mayori];

	return 0;
}
