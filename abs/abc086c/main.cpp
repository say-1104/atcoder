#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> t = {0}, x = {0}, y = {0};
	cin >> n;
	for(int i=0; i<n; i++){
		int tmp_t, tmp_x, tmp_y;
		cin >> tmp_t >> tmp_x >> tmp_y;
		t.push_back(tmp_t);
		x.push_back(tmp_x);
		y.push_back(tmp_y);
	}

	for(int i=0; i<n; i++){
		int dt = t[i+1] - t[i];
		int distance = abs(y[i+1] - y[i]) + abs(x[i+1] - x[i]);
		if(distance > dt) {
			cout << "No" << endl;
			return 0;
		}
		if(distance % 2 != dt % 2){
			cout << "No" << endl;
			return 0;
		}

	}
	cout << "Yes" << endl;
	return 0;
}
