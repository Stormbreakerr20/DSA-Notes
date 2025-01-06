#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s, r; cin >> s >> r;
	ll n = s.size(), m = r.size();
	ll i = 0, j = n - 1;
	ll c = 0;
	// search for prefix
	for (ll k = 0; k < n; k++) {
		if (c >= m || r[c] == '*') break;
		if (s[k] == r[c]) {
			c++;
		}
		else {
			c = 0;
			i = k + 1;
			if (s[k] == r[c]) {
				c++;
				i = k;
			}
		}
	}
	// search for suffix
	c = m - 1;
	for (ll k = n - 1; k >= 0; k--) {
		if (c < 0 || r[c] == '*') break;
		if (s[k] == r[c]) {
			c--;
		}
		else {
			c = m - 1;
			j = k - 1;
			if (s[k] == r[c]) {
				c--;
				j = k;
			}
		}
	}
	if (i >= j) {
		cout << -1 << endl;
		return 0;
	}
	cout << j - i + 1 << endl;
}