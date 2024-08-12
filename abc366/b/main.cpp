#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<string> s(n);
	REP(i, n) cin >> s[i];
	vector<vector<char>> t(100, vector<char>(n, '0'));
	for(int i =0; i < n; i++) {
		for(int j = 0; j<int(s[i].size()); j++){
			t[j][n-i-1] = s[i][j];
		}
	}
	for(int i =0; i < 100; i++) {
		int max = -1;
		for(int j = 0; j<n; j++){
			if(t[i][j] != '0'){
				max = j;
			}
		}
		if(max == -1) break;
		for(int j = 0; j<n; j++){
			if(j<max && t[i][j] == '0') cout << '*';
			else if(t[i][j] != '0') cout << t[i][j];
		}
		cout << endl;
	}
	return 0;
}
