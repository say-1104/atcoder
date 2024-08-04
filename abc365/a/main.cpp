#include <bits/stdc++.h>

using namespace std;

int main() {
	int y; cin >> y;
	int years;
	if(y % 4 != 0) years = 365;
	else if(y %100 != 0) years = 366;
	else if( y % 400 != 0) years = 365;
	else years = 366;
	cout << years << endl;
	return 0;
}
