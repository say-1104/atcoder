#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	for(int _=0; _<n; _++){
		int sum = 0;

		for(int i=0; i<7; i++){
			int tmp;
			cin >> tmp;
			sum += tmp;
		}
		if(_ != 0) cout << " ";
		cout << sum;
		
	}
	cout << endl;
	return 0;
}
