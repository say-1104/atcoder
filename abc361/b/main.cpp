#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <string>

using namespace std;

int main() {
	vector<int> a, b;
	for(int i=0; i<6; i++){
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	for(int i=0; i<6; i++){
		int tmp;
		cin >> tmp;
		b.push_back(tmp);
	}

	vector<int> a0, b0;
	a0.push_back(min(a[0], a[3]));
	b0.push_back(min(b[0], b[3]));
	a0.push_back(min(a[1], a[4]));
	b0.push_back(min(b[1], b[4]));
	a0.push_back(min(a[2], a[5]));
	b0.push_back(min(b[2], b[5]));
	int a_w = abs(a[3]-a[0]);
	int b_w = abs(b[3]-b[0]);
	int a_h = abs(a[4]-a[1]);
	int b_h = abs(b[4]-b[1]);
	int a_l = abs(a[5]-a[2]);
	int b_l = abs(b[5]-b[2]);

	if(a0[0] < b[0] + b_w && a0[0]+a_w > b0[0] && 
		a0[1] < b[1] + b_h && a0[1]+a_h > b0[1] && 
		a0[2] < b[2] + b_l && a0[2]+a_l > b0[2]) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
