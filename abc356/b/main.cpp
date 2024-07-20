#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;	cin >> n >> m;
	vector<int> a;
	vector<vector<int>> x(n);
	for(int i=0; i<m; i++){
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			int tmp;
			cin >> tmp;
			x[i].push_back(tmp);
		}
	}
	for(int i=0; i<m; i++){
		int sum = 0;
		for(int j=0; j<n; j++){
			sum +=x[j][i];
		}

		if(sum < a[i]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
