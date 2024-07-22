#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, t;	cin >> n >> t;
	vector<int> a(t);
	for(auto&x : a){
		cin >> x;
		x--;
		
	}
	vector<int> col(n, 0);
	vector<int> row(n, 0);
	vector<int> naname(2, 0);

	int turn = 0;

	for(int i=0; i<t; i++){
		turn++;
		int r = a[i] / n;
		int c = a[i] % n;
		row[r]++;
		col[c]++;
		if(r == c) naname[0]++;
		if(r + c == n-1) naname[1]++;

		if(row[r] == n || col[c] == n || naname[0] == n || naname[1] == n){
			cout << turn << endl;
			return 0;
		}
	}

	cout << -1 << endl;

	return 0;
}
