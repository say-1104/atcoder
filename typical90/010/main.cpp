#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	vector<int> sum_1(n+1, 0), sum_2(n+1, 0);
	for(int i=0; i<n; i++){
		int tmp, tmp2;
		cin >> tmp >> tmp2;
		if(tmp == 1) {
			sum_1[i+1] = tmp2 + sum_1[i];
			sum_2[i+1] = sum_2[i];
		}
		else {
			sum_2[i+1] = tmp2 + sum_2[i];
			sum_1[i+1] = sum_1[i];
		}
	}
	int q; cin >> q;
	vector<int> l, r;
	for(int i=0; i<q; i++){
		int tmp, tmp2;
		cin >> tmp >> tmp2;
		l.push_back(tmp); r.push_back(tmp2);
	}

	for(int i=0; i<q; i++){
		cout << sum_1[r[i]] - sum_1[l[i] - 1] << " " << sum_2[r[i]] - sum_2[l[i] - 1] << endl;
	}
	return 0;
}
