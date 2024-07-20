#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> c;
	vector<vector<int>> a(m);
	string r = "";
	for(int i = 0; i<m; i++){
		int tmp;
		cin >> tmp;
		c.push_back(tmp);
		for(int j = 0; j<c[i]; j++){
			cin >> tmp;
			a[i].push_back(tmp);
		}
		string charr;
		cin >> charr;
		r += charr;
	}

	int count = 0;
	for(int i = 0; i < (1 << n); i++){
		bitset<15> s(i);
		bool flag = true;
		for(int j = 0; j < m; j++){
			int truekey = 0;
			for(int l=0; l<c[j]; l++){
				if(s.test(a[j][l]-1)) {
					truekey++;
				}
			}
			if((r[j] == 'o' && k > truekey)|| 
				(r[j] == 'x' && k <= truekey)){
				flag = false;
			}
		}
		if(flag) count++;
	}

	cout << count << endl;

	return 0;
}
