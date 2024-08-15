#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;
using ll = long long;

template<class T> inline bool chmin(T& a, T b) { if (a > b) {a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll INF = 1LL << 60;

int main() {
	int n, k; cin >> n >> k;
	vector<ll> h(n);
	REP(i, n) cin >> h[i];

	vector<ll> dp(n, INF);
	dp[0] = 0;

	for(int i=0; i<n; i++) {
		for(int j=1; j<=k; j++) {
			if(i+j > n-1) continue;
			chmin(dp[i+j], dp[i] + abs(h[i+j] - h[i]));
		}
	}

	cout << dp[n-1] << endl;
	return 0;
}
