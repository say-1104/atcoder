#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main() {
	int t; cin >> t;
	REP(i, t) {
		int n; cin >> n;
		vector<int> p(n);
		bool b0 = true;
		REP(j, n) {
			cin >> p[j];
			if(p[j] != j+1) b0 = false;
		}
		if(b0) cout << "0" << endl;
		else if (p[0] == n && p[n-1] == 1) cout << "3" << endl;
		else {
			bool b2 = true;
			REP(j, n) {
				if(p[j] == j+1){
					bool b1 =true;
					int k = 0;
					while(k != n){
						if(k < j && p[k] > j+1) {
							b1 = false;
							break;
						}
						if(k > j && p[k] < j+1) {
							b1 = false;
							break;
						}
						k++;
					}
					if(b1) {
						b2 = false;
						cout << 1 << endl;
						break;
					}
				}
			}
			if(b2) cout << "2" << endl;

		}
	}

	return 0;
}
