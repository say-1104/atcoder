#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <string>
#include <cmath>

using namespace std;

int main() {
	long long int n;
	cin >> n;
	if(n > 100) return 0;
	long long int nsq = (int)sqrt(n);
	long long int ncb = (int)cbrt(n);
	int count = 1;
	for(int a = 2; a<nsq; a++){
		if()
		int tmp = a;
		while(true){
			tmp = tmp * a;
			if(tmp > n) break;
			cout << tmp << endl;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
