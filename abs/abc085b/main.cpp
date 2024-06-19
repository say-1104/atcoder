#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> d;
	for(int i=0; i<n; i++) {
		int tmp;
		cin >> tmp;
		if(std::find(d.begin(), d.end(), tmp) == d.end()) {
			d.push_back(tmp);
		}
	}

	cout << d.size() << endl;

	return 0;
}
