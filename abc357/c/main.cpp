#include <bits/stdc++.h>

using namespace std;
vector<int> start(2, 0);
void makesierpinski(vector<vector<int>>& table, vector<int> start, int k){
	if(k == 0) return;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			vector<int> start1(2, 0);
			start1[0] = start[0] + i * pow(3, k-1);
			start1[1] = start[1] + j * pow(3, k-1);
			if(i == 1 && j == 1){
				for(int ii=start1[0]; ii<start1[0]+pow(3, k-1); ii++){
					for(int jj=start1[1]; jj<start1[1]+pow(3, k-1); jj++){
						table[ii][jj] = 0;
					}
				}
				
			} else makesierpinski(table, start1, k-1);
		}
	}
	return;
};
int main() {
	int n;
	cin >> n;
	vector<vector<int>> table(pow(3, n), vector(pow(3, n), 1));
	makesierpinski(table, start, n);
	for(int i=0; i<pow(3, n); i++){
		for(int j=0; j<pow(3, n); j++){
			if(table[i][j] == 1) cout << "#" ;
			else cout << "." ;
		}
		cout << endl;
	}
	return 0;
}
