#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	vector<long long int> l, r;
	long long int sum = 0;
	vector<long long int> ans;

	for(int i=0; i < n; i++){
		long long int lt, rt;
		cin >> lt >> rt;
		l.push_back(lt);
		r.push_back(rt);
		ans.push_back(lt);
		sum += lt;
	}
	if(sum > 0) {
		cout << "No" << endl;
		return 0;
	}
	for(int i=0; i < n; i++){
		long long int d = min(-sum, r[i] - l[i]);
		ans[i] += d;
		sum += d;
		if(sum == 0) {
			cout << "Yes\n" << ans[0];
			for(int i=1; i < n; i++){
				cout << " " << ans[i];
			}
			cout << endl;
			return 0;
		}
	}

	return 0;
}
