#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int fee = 0;
	long long int sx, sy, tx, ty;
	cin >> sx >> sy >> tx >> ty;
	if((sx + sy) % 2 == 1) sx--;
	if((tx + ty) % 2 == 1) tx--;

	long long int divx = abs(tx-sx); 
	long long int divy = abs(ty-sy);
	long long int dist = divx - divy;
	if(dist <=0) fee = divy;
	else {
		fee += divy;
		fee += dist/2;
	}

	cout << fee << endl;





	return 0;
}
