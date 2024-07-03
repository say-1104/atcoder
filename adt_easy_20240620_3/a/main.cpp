#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int tmp = 0;
	int count = 0;
	while(true){
		tmp += n;
		if(tmp >= x){
			break;
		}
		count++;
	}
	cout << s[count] << endl;
	return 0;
}
