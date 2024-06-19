#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a_sum = 0, b_sum = 0;
	vector<int> a(n);
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	for(int i = 0; i<n; i++){
		if(i % 2 == 0) a_sum+=a[i];
		else b_sum += a[i];
	}
	cout << a_sum - b_sum << endl;



	return 0;
}
