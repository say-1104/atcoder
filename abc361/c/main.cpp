#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <string>
#include <climits>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	int ans = INT_MAX;
	for(int i=0; i<k+1; i++){
		int amin = a[i];
		int amax = a[i+n-k-1];
		int dis = amax - amin;
		if (dis < ans) ans = dis;
	}
	cout << ans << endl;
	return 0;
}
