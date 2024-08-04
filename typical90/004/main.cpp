#include <bits/stdc++.h>

using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	vector<int> sum_col(h, 0), sum_row(w, 0);
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			cin >> a[i][j];
			sum_col[i]+=a[i][j];
			sum_row[j]+=a[i][j];
		}
	}

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(j != 0) cout << " ";
			cout << sum_col[i]+sum_row[j]-a[i][j]; 
		}
		cout << endl;
	}

	return 0;
}
