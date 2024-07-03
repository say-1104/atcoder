#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	int count = 0;
	for(int i=0; i<(int)s.size(); i++){
		if(s[i] == '0'){
			if(s[i+1] == '0') {
				i++;
			}
		}
		count++;
	}
	cout << count << endl;
	return 0;
}
