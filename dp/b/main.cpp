#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main() {
	int n, k; cin >> n >> k;
	vector<int> h(n);
	REP(i, n) cin >> h[i];

	vector<int> dp(n, 0);
	for(int i=1; i<n; i++) {
		if(i==1) dp[i] = abs(h[1] - h[0]);
		else dp[i] = min(dp[i-2] + abs(h[i] - h[i-2]), dp[i-1] + abs(h[i] - h[i-1]));
	}

	cout << dp[n-1] << endl;
	return 0;
}
