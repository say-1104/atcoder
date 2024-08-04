#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	vector<pair<int, int>> a;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		a.push_back({tmp, i+1});
	}
	sort(a.rbegin(), a.rend());
	cout << a[1].second << endl;
	return 0;
}
