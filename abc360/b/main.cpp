#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <string>

using namespace std;

int main() {
	string s, t;
	
	cin >> s >> t;
	for(int i=1; i<(int)s.size(); i++){
		vector<string> tmp(i);
		for(int j = 0; j<(int)s.size(); j++){
			tmp[j % i] = tmp[j % i] + s[j];
		}
		for(int j = 0; j < i; j++){
			if(tmp[j] == t) {
				cout << "Yes" << endl;
				return 0;
			}
		}

	}
	cout << "No" << endl;
	return 0;
}
