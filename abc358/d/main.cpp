#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, tmpa, tmpb;
	int price = 0;
	vector<int> a, b;
	cin >> n >> m;
	for (int i { 0 }; i<n; ++i){
		cin >> tmpa;
		a.push_back(tmpa);
	}

	for (int i { 0 }; i<m; ++i){
		cin >> tmpb;
		b.push_back(tmpb);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int t = 0;
	for(int i=0; i<m;i++){
		for(int j=t; j<n;j++){
			if(a[j] >= b[i]){
				price+=a[j];
				t++;
				break;
			}
			t++;
			if (t == m+1) {
				cout << -1 << endl;
				return 0;
			}
		}
	}
	cout << price << endl;
	return 0;
}
