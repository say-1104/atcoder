#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll INF = 1LL << 60;

int main() {
	int n; cin >> n;
	vector<vector<ll>> abc(3, vector<ll>(n+1, 0));
	REP(i, n) {
		cin >> abc[0][i] >> abc[1][i] >> abc[2][i];
	}
	vector<vector<ll>> dp(3, vector<ll>(n+1, 0));
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				if(k == j) continue;
				chmax(dp[j][i+1], max(dp[j][i+1], dp[k][i] + abc[j][i]));
			}
		}
	}

	cout << max(dp[0][n], max(dp[1][n], dp[2][n])) << endl;
	return 0;
}
