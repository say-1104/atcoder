#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <string>

using namespace std;

int main() {
	int n;
	int total = 0;
	cin >> n;
	vector<int> a, w, b(n, -1);
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		w.push_back(tmp);
	}
	for(int i=0; i<n; i++){
		int tmp = a[i]-1;
		if(b[tmp] == -1){
			b[tmp] = i;
		} else {
			if(w[b[tmp]] > w[i]) {
				total += w[i];
			} else {
				total += w[b[tmp]];
				b[tmp] = i;
			}
		}
	}
	cout << total << endl;
	return 0;
}
