#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> mp;
 	for(int i=0; i<n; i++){
		string s; cin >>s;
		if(mp.count(s) == 0){
			cout << i+1 << endl;
			mp[s] = 1;
		}


	}
	return 0;
}
