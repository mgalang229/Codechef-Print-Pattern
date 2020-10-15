#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n][n], cur = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0, k = i; k >= 0; j++, k--) {
				a[j][k] = cur++;
			}
		}
		for (int i = 1; i < n; i++) {
			for (int j = i, k = n - 1; j < n; j++, k--) {
				a[j][k] = cur++;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << '\n'; 
		}
	}
	return 0;
}
