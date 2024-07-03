#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.size() / 2 + 1;
	cout << s[n-1] << endl;
	return 0;
}
