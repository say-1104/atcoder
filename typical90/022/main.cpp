#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
int main() {
	ll a, b, c; cin >> a >> b >> c;
	ll div = gcd(b, c);
	div = gcd(a, div);
	cout << (a / div -1) + (b / div -1) + (c / div -1) << endl;
 	return 0;
}
