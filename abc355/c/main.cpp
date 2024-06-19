#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, t, atp;
	int i, j, k;
	vector<int> a;
	int tmp;
	cin >> n >> t;
	for(i=0;i<t;i++){
		cin >> atp;
		a.push_back(atp);
	}

	vector <vector <int> > m(n, vector<int>(n));
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m[i][j] = 0;
		}
	}

	for (i=0;i<t;i++){
		m[(a[i]-1)/n][(a[i]-1)%n] = 1;
		
		for(j=0;j<n;j++){
			tmp = 1;
			k=0;
			while (tmp == 1 && k < n) {
				if(m[j][k] == 0) {
					tmp = 0;
				}
				k++;
			}
			if(tmp == 1){
				cout << i + 1 << endl;
				return 0;
			}
		
		}
		for(j=0;j<n;j++){
			tmp = 1;
			k=0;
			while (tmp == 1 && k < n) {
				if(m[k][j] == 0) {
					tmp = 0;
				}
				k++;
			}
			if(tmp == 1){
				cout << i + 1 << endl;
				return 0;
			}
		
		}
		tmp = 1;
		k=0;
		while (tmp == 1 && k < n) {
			if(m[k][k] == 0) {
				tmp = 0;
			}
			k++;
		}
		if(tmp == 1){
			cout << i + 1 << endl;
			return 0;
		}

		tmp = 1;
		k=0;
		while (tmp == 1 && k < n) {
			if(m[n-k-1][k] == 0) {
				tmp = 0;
			}
			k++;
		}
		if(tmp == 1){
			cout << i +1<< endl;
			return 0;
		}
		
		


	}
	cout << -1 << endl;
	return 0;
}
