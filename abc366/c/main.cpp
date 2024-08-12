#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main() {
	int q; cin >> q;
	multiset<int> ms;
	set<int> s;
	REP(i, q) {
		int flag; cin >> flag;
		if(flag == 1) {
			int x; cin >> x;
			ms.insert(x); s.insert(x);
		} else if(flag == 2) {
			int x; cin >> x;
			ms.erase(ms.find(x));
			if(ms.find(x) == ms.end()) s.erase(x);
		} else {
			cout << s.size() << endl;
		}

	}
	return 0;
}
