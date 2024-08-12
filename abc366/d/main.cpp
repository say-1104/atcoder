#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<vector<int>> sumz(n*n, vector<int>(n+1, 0));
	vector<vector<int>> sumy((n+1)*n, vector<int>(n+1, 0));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				int a;
				cin >> a;
				sumz[n*i+j][k+1] = sumz[n*i+j][k] + a;
				//cout << sumz[n*i+j][k+1];
				sumy[(n+1)*i+j+1][k+1] = sumy[(n+1)*i+j][k+1] + sumz[n*i+j][k+1];
				//cout << sumy[(n+1)*i+j+1][k+1];
			}
			//cout << endl;
		}
	}

	int q; cin >> q;
	for(int _=0; _<q; _++){
		int lx, rx, ly, ry, lz, rz; cin >> lx >> rx >> ly >> ry >> lz >> rz;
		int sum = 0;		
		for(int i=lx; i<rx+1; i++){
			sum += sumy[(n+1)*(i-1)+ry][rz] + sumy[(n+1)*(i-1)+ly-1][lz-1] 
				- sumy[(n+1)*(i-1)+ly-1][rz] - sumy[(n+1)*(i-1)+ry][lz-1];
		}
		cout << sum << endl;
	}
	return 0;
}
