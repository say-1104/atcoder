#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;
using ll = long long;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll INF = 1LL << 60;

int main() {
	int n, W; cin >> n >> W;
	vector<ll> w(n), v(n);
	REP(i, n) cin >> w[i] >> v[i];
	vector<vector<ll>> dp(n+1, vector<ll>(W+1, -1));

	dp[0][0] = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j < W; j++){
			if(dp[i][j] == -1) continue;
			chmax(dp[i+1][j], dp[i][j]);
			if(j + w[i] <= W) chmax(dp[i+1][j+w[i]], dp[i][j] + v[i]);
		}
	}
	ll ans = 0;
	REP(i, W+1) chmax(ans, dp[n][i]);
	cout << ans << endl;
	return 0;
}
