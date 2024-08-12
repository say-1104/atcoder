#include <bits/stdc++.h>

using namespace std;

int main() {
	int h, w; cin >> h >> w;
	int si, sj; cin >> si >> sj;
	si--; sj--;
	vector<vector<int>> c(h, vector<int>(w));
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			char tmp; cin >> tmp;
			if(tmp == '.') c[i][j] = 0;
			else c[i][j] = 1;
		}
	}

	string x; cin >> x;
	int ti = si, tj = sj;
	for(int i=0; i<int(x.size()); i++){
		if(x[i] == 'L') tj--;
		else if(x[i] == 'R') tj++;
		else if(x[i] == 'U') ti--;
		else ti++;
		if(ti == -1 || ti == h || tj == -1 || tj == w || c[ti][tj] == 1){
			ti = si; tj = sj;
		}
		else {
			si = ti; sj = tj;
		}
	}
	cout << si+1 << " " << sj+1 << endl;
	return 0;
}
