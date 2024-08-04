#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	long long int m;
	cin >> n >> m;
	long long int sum = 0;
	vector<int> a;
	int maxa = 0;
	for(int i= 0; i<n; i++){
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
		if (tmp > maxa) maxa = tmp;
		sum += tmp;
	}
	if(sum <= m) {
		cout << "infinite" << endl;
		return 0;
	}
	int l = 0, r = maxa;
	int mid;
	while (r-l > 1){
		mid = (l+r) / 2;
		long long int tmpm = 0;
		for(int i = 0; i<n; i++){
			tmpm += min(a[i], mid);
		}
		if(tmpm <= m) l = mid;
		if(tmpm > m) r = mid;
	}
	cout << l << endl;
	return 0;
}
