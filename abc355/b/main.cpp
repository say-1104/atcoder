#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

int main() {
	int n, m;
	int i;
	int tmp1 = 0, tmp2 = 0;
	int t;
	vector <int> a, b;
	cin >> n >> m;
	for(i = 0; i<n; i++){
		cin >> t;
		a.push_back(t);
	}
	for(i = 0; i<m; i++){
		cin >> t;
		b.push_back(t);
	}

	vector<int> c;
	copy(a.begin(),a.end(), back_inserter(c));
	copy(b.begin(),b.end(), back_inserter(c));
	sort(c.begin(), c.end());

	for (i=0; i<m+n; i++){
		for(int j=0; j<n; j++){
			if(c[i] == a[j]) tmp1 = 1;
		}

		if(tmp1 == 1 && tmp2 == 1) {
			cout << "Yes" << endl;
			return 0;
		}
		tmp2 = tmp1;
		tmp1 = 0;
	}

	cout << "No" << endl;
	return 0;
}
