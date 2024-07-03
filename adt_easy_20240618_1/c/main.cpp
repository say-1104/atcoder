#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	sort(s.rbegin(), s.rend());
	char tmp = '0';
	int max = 0;
	char cmax = s[s.size()-1];
	for(int i=0;i<(int)s.size();i++){
		int count = 0;
		if(tmp == s[i]){
			while(true){
				i++;
				count++;
				if(tmp != s[i]) break;
			}
			if(max <= count){
				max = count;
				cmax = s[i-1];
			}
		}
		tmp = s[i];
	}
	cout << cmax << endl;
	return 0;
}
