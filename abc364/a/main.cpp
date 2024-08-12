#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	bool past = false;
	for(int i=0; i<n; i++){
		bool now = false;
		string s; cin >> s;
		if(s == "sweet") now = true;
		if(past && now) {
			if(i == n-1) cout << "Yes" << endl;
			else cout  << "No" << endl;
			return 0;
		}
		past = now;
	}
	cout << "Yes" << endl;
	return 0;
}
