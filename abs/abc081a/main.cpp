#include <iostream>
#include <bitset>
using namespace std;

int main() {
	int sum = 0;
	bitset<3> s;
	cin >> s;
	for(int i=0; i<3; i++) if(s.test(i)) sum++;
	cout << sum << endl;
	return 0;
}
