#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x == y) {
		cout << -1 << endl;
	} else  {
		switch (x*y) {
			case 2:
				cout << 3 << endl;
				break;
			case 3:
				cout << 2 << endl;
				break;
			case 6:
				cout << 1 << endl;
				break;
		}

	}
	return 0;
}
