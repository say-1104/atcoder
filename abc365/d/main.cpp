#include <bits/stdc++.h>

using namespace std;
int janken(int win, int lose) {
	//win側が勝てば1を出力、あいこなら0、負けなら-1
	if((win == 0 && lose == 1) ||(win == 1 && lose == 2) || (win == 2 && lose == 0))
		return 1;
	else if(win == lose) return 0;
	return -1;
}

int main() {
	int n; cin >> n;
	string s; cin >> s;
	vector<vector<int>> dp(3, vector<int>(n+1, 0));
	for(int i=1; i<n+1; i++){
		for(int j=0; j<3; j++){
			int lose;
			if(s[i-1] == 'R') lose = 0;
			else if(s[i-1] == 'S') lose = 1;
			else lose = 2;
			if(janken(j, lose) == 1) {
				vector<int> count;
				for(int k=0; k<3; k++){
					if(j==k) continue;
					count.push_back(dp[k][i-1]);
				}
				dp[j][i] += max(count[0], count[1]) + 1;
			} else if(janken(j, lose) == 0) {
				vector<int> count;
				for(int k=0; k<3; k++){
					if(j==k) continue;
					count.push_back(dp[k][i-1]);
				}
				dp[j][i] += max(count[0], count[1]);
			} else {
				dp[j][i] = 0;
			}
		}
	}
	cout << max(dp[0][n], max(dp[1][n], dp[2][n])) << endl;
	return 0;
}
