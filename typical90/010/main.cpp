#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	vector<int> c, p;
	for(int i=0; i<n; i++){
		int tmp, tmp2;
		cin >> tmp >> tmp2;
		c.push_back(tmp); p.push_back(tmp2);
	}
	int q; cin >> q;
	vector<int> l, r;
	for(int i=0; i<q; i++){
		int tmp, tmp2;
		cin >> tmp >> tmp2;
		l.push_back(tmp); r.push_back(tmp2);
	}

	for(int i=0; i<q; i++){
		int a_sum = 0, b_sum = 0;
		for(int j=l[i]-1; j<=r[i]-1; j++){
			if(c[j] == 1) a_sum += p[j];
			else b_sum += p[j];
		}
		cout << a_sum << " " << b_sum << endl;
	}
	return 0;
}
