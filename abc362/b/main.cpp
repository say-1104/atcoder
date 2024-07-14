#include <bits/stdc++.h>

using namespace std;

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int l1 = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3);
	int l2 = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
	int l3 = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

	if(l1+l2 == l3 ||l3+ l2== l1 ||l1 + l3 == l2){
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}
	return 0;
}
