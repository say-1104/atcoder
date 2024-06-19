#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	int i, j;
	string buff;
	cin >> n >> m;
	int ac = 0;
	int maxac;
	vector<vector<int> > s(n, vector<int>(m));
	vector<int> tmp;
	for(i=0; i<n; i++){
		cin >> buff;
		for (j=0; j<m; j++){
			if(buff[j] == 'o') s[i][j] = 1;
			else s[i][j] = 0;
		}
	}
	for(i=0; i<n; i++){
		if(s[i][0] == 1){
			ac = 1;
			for (j=1; j<m; j++){
				if(s[i][j] == 0) tmp.push_back(j);
			}

			for (j=0; j<n; j++){
				if(j == )
				if(s[i][j] == 0) tmp.push_back(j);
			}
		}
	}

	return 0;

}
