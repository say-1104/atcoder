#include <iostream>
#include <vector>
#include <bitset>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> s;
	for(int i=0; i<n; i++){
		string tmp;
		cin >> tmp;
		s.push_back(tmp);
	}
	int min_count = INT_MAX;
	for(int i=0; i < (1 << n); i++){
		bool flag = true;
		bitset<10> bs(i);
		vector<int> col;
		for(int j = 0; j < n; j++){
			if(bs.test(j)){
				col.push_back(j);
			}
		}
		for(int j = 0; j < m; j++){
			bool b = false;
			for(int k = 0; k < col.size(); k++){
				if(s[col[k]][j] == 'o') b = true;
			}
			if(!b) flag = false;
		}

		if(flag) {
			min_count = min(min_count, int(col.size()));
		}
	}
	cout << min_count << endl;
	return 0;

}
