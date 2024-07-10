#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <string>

using namespace std;

int main() {
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> a;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	auto it = a.begin();
	for(int i=0; i<k; i++) it++;
	a.insert(it, x);
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << a[n] << endl;
	return 0;
}
