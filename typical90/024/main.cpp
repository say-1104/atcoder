#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using ll = long long;
using namespace std;

int main() {
	int n; ll k; cin >> n >> k;
	vector<ll> a(n), b(n);
	ll diff = 0;
	REP(i, n) cin >> a[i];
	REP(i, n) cin >> b[i];
	REP(i, n) diff += abs(a[i]-b[i]);

	if(diff > k) cout << "No" << endl;
	else {
		if((k - diff) % 2 == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
