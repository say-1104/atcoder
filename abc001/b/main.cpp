#include <bits/stdc++.h>

using namespace std;

int main() {
	int m; cin >> m;
	string vv;
	if(m < 100)	vv = "00";
	else if(m < 1000) {
		string v1 = "0";
		string v2 = to_string(m/100);
		vv = v1+v2;
	} else if(m <= 5000) {
		vv = to_string(m/100);
	} else if(m <= 30000) {
		vv = to_string(m/1000 + 50); 
	} else if(m <= 70000) {
		vv = to_string((m/1000 - 30)/5+80); 
	} else {
		vv = "89";
	}
	cout << vv << endl;
	return 0;
}
