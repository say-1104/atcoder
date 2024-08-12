#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main() {
	int n, t, a; cin >> n >> t >> a;
	if(t > a) {
		a += n - t - a;
		if(t < a) cout << "No" << endl;
		else cout << "Yes" << endl;
	} else {
		t += n - t - a;
		if(a < t) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}
