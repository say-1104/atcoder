#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	string d1 = "dream", d2 = "dreamer", d3 = "erase", d4 = "eraser";
	while(s.size() > 4) {
		if(s.substr(s.size()-5) == d1 || s.substr(s.size()-5) == d3) s = s.substr(s.size()-5); 
		else if(s.substr(s.size()-6) == d4) s = s.substr(0, s.size()-6);
		else if(s.substr(s.size()-7) == d2) s = s.substr(0, s.size()-7);
		else {
			cout << "NO" << endl;
			return 0;
		}
	}
	if(s.size() == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
