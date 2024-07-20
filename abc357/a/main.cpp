#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> h(n);
	
	for(int i=0; i<n; i++){
		cin >> h[i];
	}
	int sum = 0;
	int j = 0;
	while(true){
		sum += h[j];
		if(sum > m || j == n){
			cout << j << endl;
			break;
		}
		j++;
	}


	return 0;
}
