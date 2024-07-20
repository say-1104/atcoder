#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> a;
	for(int i=1; i<=n; i++){
		if(l<=i && i<=r){
			a.push_back(r-(i-l));
		}
		else {
			a.push_back(i);
		}
	}
	cout << a[0] ;
	for(int i=1; i<n; i++){
		cout << " " << a[i];
	}
	cout << endl;
	return 0;
}
