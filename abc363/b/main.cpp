#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t, p;
	cin >> n >> t >> p;
	vector<int> l;
	int count = 0;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		if(t-tmp <= 0) {
			count++;
		}
		l.push_back(t-tmp);
	}
	if(count >= p){
		cout << 0 << endl;
		return 0;
	}
	sort(l.begin(), l.end());
	cout << l[p-1] << endl;


	return 0;
}
