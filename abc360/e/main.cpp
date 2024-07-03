#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <string>
#include <atcoder/all>
#include <cmath>
using namespace atcoder;

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int ans_bunbo = static_cast<int>(pow(n*n, k));
	int ans_bunshi = 0;
	for(int x = 0; x<n; x++){
		int x0; 
		if(x == 0) x0 = n*n - 2*n + 2;
		else x0 = 2;
		for(int i=1; i<k; i++){
			x0 = n * (n-2) * x0 + 2 * static_cast<int>(pow(n*n, i));
		}
		ans_bunshi += (x+1) * x0;
	}

	int mod = 998244353;
  	long long denominator = inv_mod(ans_bunbo, mod);
  	cout << ans_bunshi * denominator % mod << endl;
  // -> 894983505

	return 0;
}
