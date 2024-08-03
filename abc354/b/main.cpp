#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int t = 0;
	cin >> n;
	vector<string> s;
	for(int i=0; i<n; i++){
		string tmps;
		int c;
		cin >> tmps >> c;
		s.push_back(tmps);
		t+=c;
	}
	sort(s.begin(), s.end());
	t = t % n;
	cout << s[t] << endl;
	return 0;
}
