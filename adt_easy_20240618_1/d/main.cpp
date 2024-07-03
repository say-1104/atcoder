#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a, b;
	int tmp;
	for(int i=0;i<n;i++){
		cin >> tmp;
		a.push_back(tmp); 
	}
	for(int i=0;i<k;i++){
		cin >> tmp;
		b.push_back(tmp); 
	}
	int max = 0;
	vector<int> max_x;
	for(int i=0;i<n;i++){
		if(a[i] > max) {
			max = a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i] == max) {
			max_x.push_back(i);
		}
	}
	for(int i=0;i<k;i++){
		int target = b[i]-1;
		if(find(max_x.begin(), max_x.end(), target) != max_x.end()){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
