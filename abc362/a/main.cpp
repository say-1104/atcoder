#include <bits/stdc++.h>

using namespace std;

int main() {
	int r, g, b;
	string c;
	cin  >> r >> g >> b >> c;
	
	if(c == "Red") {
		if(g > b) cout << b << endl;
		else cout << g << endl;
	} else if(c == "Green") {
		if(r > b) cout << b << endl;
		else cout << r << endl;
	} else {
		if(r > g) cout << g << endl;
		else cout << r << endl;
	}
	return 0;
}
