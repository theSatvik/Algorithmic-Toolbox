#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

	ll a, b, c;
	cin >> a;
	vector<int> l(a);
	for (ll i = 0; i < a; i++)
		cin >> l[i];

	cin >> b;
	vector<int> m(b);
	for (ll i = 0; i < b; i++)
		cin >> m[i];

	cin >> c;
	vector<int> n(c);
	for (ll i = 0; i < c; i++)
		cin >> n[i];
    ll mat[a+1][b+1][c+1];

	for (ll i = 0; i <= a; i++) {
		for (ll j = 0; j <= b; j++) {
			for (ll k = 0; k <= c; k++) {
				if (i == 0 || j == 0 || k == 0) {
					mat[i][j][k] = 0;
				}
				else if (l[i - 1] == m[j - 1] && l[i - 1] == n[k - 1]) {
					mat[i][j][k] = mat[i - 1][j - 1][k - 1] + 1;
				}
				else {
					mat[i][j][k] =max( max(mat[i - 1][j][k],mat[i][j - 1][k]),mat[i][j][k - 1]);
				}
			}
		}
	}
	cout <<  mat[a][b][c] << endl;
}
