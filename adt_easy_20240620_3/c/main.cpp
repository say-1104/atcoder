#include <iostream>
#include <vector>

using namespace std;
/*int COM(int n, int k){
	int bunshi = 1, bunbo1 = 1, bunbo2 = 1;
	int flag = n - k;
	for(int j=0; j<n; j++){
		bunshi *= (j+1);
	}
	if (flag != 0){
		for(int j=0; j<flag; j++){
			bunbo1 *= (j+1);
		}
	}
	for(int j=0; j<k; j++){
		bunbo2 *= (j+1);
	}
	return (bunshi / (bunbo1 * bunbo2));
}*/

int main() {
	int n;
	cin >> n;
	vector<vector<int>> tmp(n, vector<int>(n, 0));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i+1; j++){
			if(j == 0 || j == i){
				tmp[i][j] = 1;
			} else {
				tmp[i][j] = tmp[i-1][j-1] + tmp[i-1][j];
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < i+1; j++){
			if(j != 0){
				cout << " ";
			} 
			cout << tmp[i][j];
		}
		cout << endl;
	}

	return 0;
}
