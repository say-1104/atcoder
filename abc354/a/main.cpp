#include <bits/stdc++.h>

using namespace std;

int main() {
	int h; cin >> h;
	int i = 0;
	int j = 0;
	while(true){
		i++;
		j+=pow(2, i-1);
		if(j>h) break;
		
	}
	cout << i << endl;
	return 0;
}
